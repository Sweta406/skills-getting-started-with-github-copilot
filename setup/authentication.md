# Authentication & Licensing 🔐

Learn how to authenticate GitHub Copilot and verify your subscription access.

## 🎯 Overview

GitHub Copilot requires authentication with your GitHub account and an active subscription. This guide walks you through the process.

## 📋 Prerequisites

Before authenticating, ensure you have:
- A GitHub account
- An active GitHub Copilot subscription (Individual, Business, or Enterprise)
- VS Code with GitHub Copilot extension installed

## 🔑 Authentication Steps

### Step 1: Sign In to GitHub Copilot

1. **Open Command Palette:**
   - Windows/Linux: `Ctrl + Shift + P`
   - macOS: `Cmd + Shift + P`

2. **Start Sign-In Process:**
   - Type: `GitHub Copilot: Sign In`
   - Press Enter

3. **Choose Authentication Method:**
   - **Option A:** Sign in through VS Code (recommended)
   - **Option B:** Sign in through browser

### Step 2: Browser Authentication

1. VS Code will open your default browser
2. You'll be redirected to GitHub's authorization page
3. **Sign in to GitHub** with your credentials
4. **Authorize the application** when prompted
5. **Return to VS Code** - authentication should complete automatically

### Step 3: Verify Authentication

Check the status bar at the bottom of VS Code:
- **✅ GitHub Copilot: Ready** - Successfully authenticated
- **⚠️ GitHub Copilot: Warning** - Authentication issue
- **❌ GitHub Copilot: Error** - Not authenticated

## 📄 Subscription Types

### Individual Subscription ($10/month)
- Personal GitHub account
- Perfect for individual developers
- Access to all Copilot features

### Business Subscription ($19/user/month)
- Organization account required
- Additional admin controls
- Policy management features

### Enterprise Subscription (Contact GitHub)
- Advanced security features
- Custom policies and controls
- Priority support

## ✅ Verification Checklist

After authentication, verify everything works:

### ✅ Status Check
1. Open a new file (e.g., `test.py`)
2. Look for Copilot icon in status bar
3. Icon should show "Ready" status

### ✅ Basic Functionality Test
1. Create a new file: `hello.js`
2. Type: `// Function to add two numbers`
3. Press Enter and wait for suggestions
4. You should see AI-generated code suggestions

### ✅ Chat Feature Test (if available)
1. Open Command Palette (`Ctrl/Cmd + Shift + P`)
2. Type: `GitHub Copilot: Open Chat`
3. Try asking a simple question about code

## 🚨 Troubleshooting Authentication

### Common Issues & Solutions

#### "Not signed in" error
```
Solution:
1. Sign out: Command Palette → "GitHub Copilot: Sign Out"
2. Sign in again: Command Palette → "GitHub Copilot: Sign In"
3. Clear browser cache if issues persist
```

#### "Subscription not found" error
```
Solution:
1. Verify your GitHub Copilot subscription at github.com/settings/copilot
2. Ensure subscription is active and not expired
3. Contact GitHub support if subscription shows as active
```

#### Browser not opening
```
Solution:
1. Manually open: https://github.com/login/device
2. Enter the code shown in VS Code
3. Complete authentication in browser
```

#### Corporate firewall issues
```
Solution:
1. Contact IT department about GitHub domains
2. Configure proxy settings in VS Code if needed
3. Use alternative authentication method
```

## 🔐 Security Best Practices

### Account Security
- ✅ Enable two-factor authentication on GitHub
- ✅ Use strong, unique passwords
- ✅ Regularly review authorized applications
- ✅ Monitor account activity

### Workspace Security
- ✅ Sign out on shared computers
- ✅ Use private repositories for sensitive code
- ✅ Review Copilot's data usage policies
- ✅ Understand what data is sent to OpenAI

## 📊 Managing Your Subscription

### Check Subscription Status
1. Visit [GitHub Copilot Settings](https://github.com/settings/copilot)
2. View current plan and usage
3. Manage billing information

### Subscription Controls
- **Pause Subscription:** Temporarily disable without losing data
- **Cancel Subscription:** Permanently end access
- **Upgrade/Downgrade:** Change plan types
- **Billing History:** View past payments

## 🔄 Switching Accounts

If you need to use a different GitHub account:

1. **Sign out current account:**
   ```
   Command Palette → "GitHub Copilot: Sign Out"
   ```

2. **Clear VS Code settings (optional):**
   ```
   Command Palette → "Preferences: Open Settings (JSON)"
   Remove GitHub-related entries
   ```

3. **Sign in with new account:**
   ```
   Command Palette → "GitHub Copilot: Sign In"
   ```

## 📋 Next Steps

After successful authentication:
1. ➡️ [Configure your settings](./configuration.md)
2. ➡️ [Customize your workspace](./customization.md)
3. ➡️ [Start with beginner tutorials](../beginner/README.md)

---

**Need help?** Check our [troubleshooting guide](../resources/troubleshooting.md) or visit [GitHub Support](https://support.github.com/).