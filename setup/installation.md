# Installation Guide 📦

Complete step-by-step instructions for installing VS Code and GitHub Copilot.

## Step 1: Install Visual Studio Code

### Windows
1. Visit [https://code.visualstudio.com/](https://code.visualstudio.com/)
2. Click "Download for Windows"
3. Run the downloaded installer
4. Follow the installation wizard (recommended settings are fine)
5. Launch VS Code

### macOS
1. Visit [https://code.visualstudio.com/](https://code.visualstudio.com/)
2. Click "Download for Mac"
3. Open the downloaded `.zip` file
4. Drag "Visual Studio Code" to your Applications folder
5. Launch VS Code from Applications

### Linux (Ubuntu/Debian)
```bash
# Update package index
sudo apt update

# Install dependencies
sudo apt install software-properties-common apt-transport-https wget

# Add Microsoft GPG key
wget -q https://packages.microsoft.com/keys/microsoft.asc -O- | sudo apt-key add -

# Add VS Code repository
sudo add-apt-repository "deb [arch=amd64,arm64,armhf] https://packages.microsoft.com/repos/code stable main"

# Install VS Code
sudo apt update
sudo apt install code
```

## Step 2: Install GitHub Copilot Extension

### Method 1: VS Code Marketplace (Recommended)
1. Open VS Code
2. Click the Extensions icon in the sidebar (🧩) or press `Ctrl+Shift+X` (Windows/Linux) or `Cmd+Shift+X` (Mac)
3. Search for "GitHub Copilot"
4. Click "Install" on the official GitHub Copilot extension
5. Wait for installation to complete

### Method 2: Command Palette
1. Open VS Code
2. Press `Ctrl+Shift+P` (Windows/Linux) or `Cmd+Shift+P` (Mac)
3. Type "Extensions: Install Extensions"
4. Search for "GitHub Copilot"
5. Click "Install"

### Method 3: Direct Link
Visit: [GitHub Copilot Extension](https://marketplace.visualstudio.com/items?itemName=GitHub.copilot)

## Step 3: Install Additional Recommended Extensions

For the best experience, consider installing these extensions:

```
GitHub Copilot Chat - Enhanced conversational AI
GitHub Copilot Labs - Experimental features
GitLens - Git integration
Prettier - Code formatting
ESLint - JavaScript/TypeScript linting
Python - Python development support
```

### Quick Install Commands
Open VS Code terminal (`Ctrl+`` `) and run:

```bash
code --install-extension GitHub.copilot
code --install-extension GitHub.copilot-chat
code --install-extension GitHub.copilot-labs
code --install-extension eamodio.gitlens
code --install-extension esbenp.prettier-vscode
code --install-extension ms-vscode.vscode-eslint
code --install-extension ms-python.python
```

## Step 4: Verify Installation

1. Restart VS Code
2. Look for the GitHub Copilot icon in the status bar (bottom right)
3. The icon should show one of these states:
   - ✅ Ready (logged in and active)
   - ⚠️ Warning (needs authentication)
   - ❌ Error (needs troubleshooting)

## 🔧 System Requirements

### Minimum Requirements
- **OS:** Windows 10+, macOS 10.15+, or Linux
- **RAM:** 4GB minimum, 8GB recommended
- **Storage:** 500MB free space
- **Internet:** Stable connection required

### Recommended Setup
- **RAM:** 16GB or more
- **Storage:** SSD for better performance
- **Display:** Multiple monitors for enhanced productivity

## 🚨 Troubleshooting

### Common Issues

**Extension not visible after installation:**
- Restart VS Code completely
- Check if the extension is enabled in Extensions panel

**Installation fails:**
- Check internet connection
- Try installing from VS Code marketplace website
- Run VS Code as administrator (Windows only)

**Performance issues:**
- Close unnecessary applications
- Increase VS Code memory limit
- Check system resources

## 📋 Next Steps

After successful installation:
1. ➡️ [Authenticate with GitHub](./authentication.md)
2. ➡️ [Configure your settings](./configuration.md)
3. ➡️ [Start with beginner tutorials](../beginner/README.md)

---

**Need help?** Check our [troubleshooting guide](../resources/troubleshooting.md) or [FAQ](../resources/faq.md).