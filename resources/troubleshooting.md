# Troubleshooting Guide 🔧

Common issues with GitHub Copilot and their solutions.

## 🚨 Authentication Issues

### Problem: "Not signed in" error
**Symptoms:** Copilot shows as inactive, no suggestions appearing

**Solutions:**
1. **Check authentication status**
   ```
   Command Palette → "GitHub Copilot: Sign In"
   ```

2. **Sign out and sign back in**
   ```
   Command Palette → "GitHub Copilot: Sign Out"
   Command Palette → "GitHub Copilot: Sign In"
   ```

3. **Clear VS Code authentication cache**
   - Close VS Code
   - Delete: `~/.vscode/User/globalStorage/github.copilot/`
   - Restart VS Code and sign in again

### Problem: "Subscription not found" error
**Symptoms:** Authentication works but no suggestions appear

**Solutions:**
1. **Verify subscription at GitHub**
   - Visit: https://github.com/settings/copilot
   - Check subscription status and billing

2. **Check organization access**
   - If using business account, verify organization permissions
   - Contact your organization admin if needed

3. **Wait for propagation**
   - New subscriptions may take 10-15 minutes to activate
   - Try again after waiting

## ⚡ Performance Issues

### Problem: Copilot suggestions are slow
**Symptoms:** Long delays before suggestions appear

**Solutions:**
1. **Check internet connection**
   - Copilot requires stable internet
   - Test connection speed and stability

2. **Reduce workspace size**
   ```json
   // In settings.json
   "files.exclude": {
     "**/node_modules": true,
     "**/dist": true,
     "**/.git": true
   }
   ```

3. **Close unnecessary extensions**
   - Disable unused VS Code extensions
   - Restart VS Code after changes

4. **Increase timeout settings**
   ```json
   "github.copilot.advanced": {
     "timeout": 10000
   }
   ```

### Problem: High CPU/Memory usage
**Symptoms:** VS Code becomes slow, fan runs constantly

**Solutions:**
1. **Limit suggestion count**
   ```json
   "github.copilot.suggestions.count": 1
   ```

2. **Exclude large files**
   ```json
   "files.watcherExclude": {
     "**/.git/objects/**": true,
     "**/node_modules/**": true,
     "**/coverage/**": true
   }
   ```

3. **Restart VS Code regularly**
   - Memory leaks can accumulate over time
   - Restart every few hours during intensive work

## 🎯 Suggestion Quality Issues

### Problem: No suggestions appearing
**Symptoms:** Copilot is active but no gray text suggestions

**Solutions:**
1. **Check file type**
   ```json
   "github.copilot.enable": {
     "*": true,
     "plaintext": false,
     "markdown": true
   }
   ```

2. **Improve context**
   - Add more descriptive comments
   - Include function signatures and variable names
   - Provide example usage in comments

3. **Check cursor position**
   - Place cursor at end of line or in empty space
   - Ensure proper indentation context

### Problem: Poor suggestion quality
**Symptoms:** Suggestions don't match intent or contain errors

**Solutions:**
1. **Improve prompt specificity**
   ```javascript
   // Bad: Function to process data
   // Good: Function to validate email addresses using regex pattern
   ```

2. **Add context information**
   ```python
   # In a Django web application
   # Function to authenticate user login
   # Returns User object or None
   ```

3. **Break down complex requests**
   ```typescript
   // Step 1: Define interface for user data
   interface User {
     // Copilot will suggest fields
   }
   
   // Step 2: Implement validation function
   function validateUser(user: User) {
     // Copilot will suggest validation logic
   }
   ```

## 🔒 Security and Privacy Issues

### Problem: Copilot suggests sensitive information
**Symptoms:** API keys, passwords, or secrets in suggestions

**Solutions:**
1. **Configure sensitive file exclusions**
   ```json
   "github.copilot.enable": {
     "secrets": false,
     "env": false,
     "key": false,
     "password": false
   }
   ```

2. **Add files to .gitignore**
   ```gitignore
   .env
   .env.local
   *.key
   *.pem
   secrets/
   ```

3. **Review all suggestions carefully**
   - Never commit sensitive data
   - Use environment variables for secrets
   - Validate all AI-generated code

### Problem: Code contains vulnerabilities
**Symptoms:** Security scanners flag AI-generated code

**Solutions:**
1. **Add security requirements to prompts**
   ```javascript
   // Function to process user input with XSS protection
   // Sanitize all inputs, validate against allowlist
   // Use parameterized queries for database operations
   ```

2. **Use security-focused extensions**
   - Install security linting extensions
   - Run vulnerability scanners regularly

3. **Manual security review**
   - Review all user input handling
   - Check authentication and authorization
   - Validate database query patterns

## 🌐 Network and Connectivity Issues

### Problem: Intermittent connection failures
**Symptoms:** Suggestions work sometimes but not others

**Solutions:**
1. **Check corporate firewall**
   - Whitelist GitHub domains:
     - `*.github.com`
     - `*.githubusercontent.com`
     - `api.github.com`

2. **Configure proxy settings**
   ```json
   "http.proxy": "http://proxy.company.com:8080",
   "http.proxyStrictSSL": false
   ```

3. **Test connectivity**
   ```bash
   # Test GitHub API access
   curl -H "Authorization: token YOUR_TOKEN" https://api.github.com/user
   ```

### Problem: Behind corporate firewall
**Symptoms:** Authentication fails or suggestions don't load

**Solutions:**
1. **Contact IT department**
   - Request access to GitHub Copilot domains
   - Provide business justification

2. **Use alternative authentication**
   - Try device code flow if browser method fails
   - Use personal hotspot temporarily for setup

3. **Configure certificate settings**
   ```json
   "http.systemCertificates": true,
   "http.proxyStrictSSL": false
   ```

## 🔄 Extension Issues

### Problem: Copilot extension won't install
**Symptoms:** Installation fails or extension doesn't appear

**Solutions:**
1. **Update VS Code**
   - Ensure you have the latest version
   - Copilot requires recent VS Code versions

2. **Clear extension cache**
   ```bash
   # Close VS Code first
   rm -rf ~/.vscode/extensions/github.copilot*
   ```

3. **Manual installation**
   - Download extension from marketplace
   - Install using `code --install-extension` command

### Problem: Extension conflicts
**Symptoms:** Copilot interferes with other extensions

**Solutions:**
1. **Disable conflicting extensions**
   - Identify extensions that modify IntelliSense
   - Disable one by one to find conflicts

2. **Adjust extension priority**
   ```json
   "github.copilot.inlineSuggest.enable": true,
   "editor.inlineSuggest.enabled": true
   ```

3. **Reset to default settings**
   - Back up current settings
   - Reset VS Code to defaults
   - Reconfigure step by step

## 📱 Platform-Specific Issues

### Windows Issues
**Problem:** PowerShell execution policy errors

**Solution:**
```powershell
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
```

### macOS Issues
**Problem:** Keychain access errors

**Solution:**
```bash
# Reset keychain access
security delete-generic-password -s "github.copilot"
```

### Linux Issues
**Problem:** Missing dependencies

**Solution:**
```bash
# Install required libraries
sudo apt-get update
sudo apt-get install libxss1 libasound2
```

## 🧪 Testing Your Setup

### Diagnostic Checklist
Run through this checklist to verify everything works:

```javascript
// 1. Create a new file: test-copilot.js
// 2. Type this comment and press Enter:
// Function to calculate factorial of a positive integer

// 3. You should see a suggestion like:
function factorial(n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 4. Test with multiple suggestions (Alt + ] to cycle)
// 5. Test acceptance (Tab) and dismissal (Esc)
```

### Connection Test
```javascript
// Test comment to verify Copilot connectivity
// If you see suggestions for this comment, Copilot is working correctly
// Try different comment styles to test suggestion quality
```

## 📞 Getting Additional Help

### Official Support Channels
- **GitHub Support:** https://support.github.com/
- **VS Code Issues:** https://github.com/microsoft/vscode/issues
- **Copilot Documentation:** https://docs.github.com/en/copilot

### Community Resources
- **Stack Overflow:** Tag questions with `github-copilot`
- **GitHub Community:** https://github.community/
- **Reddit:** r/github and r/vscode

### Escalation Process
1. **Try common solutions** from this guide
2. **Search existing issues** on GitHub/Stack Overflow
3. **Create detailed bug report** with:
   - VS Code version
   - Copilot extension version
   - Operating system details
   - Reproducible steps
   - Error messages or screenshots

## 📋 Prevention Tips

### Best Practices to Avoid Issues
- ✅ Keep VS Code and extensions updated
- ✅ Regularly restart VS Code during long sessions
- ✅ Monitor system resources (CPU, memory)
- ✅ Use specific, clear prompts
- ✅ Review all AI suggestions before accepting
- ✅ Test code thoroughly before committing

### Regular Maintenance
- **Weekly:** Update extensions and VS Code
- **Monthly:** Clean up workspace, review settings
- **Quarterly:** Review and optimize configuration

---

**Still having issues?** Join our [community discussion](./community.md) or check the [FAQ](./faq.md) for more specific solutions!