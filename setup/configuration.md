# Configuration & Settings ⚙️

Optimize your VS Code and GitHub Copilot settings for the best development experience.

## 🎯 Recommended VS Code Settings

### Basic Configuration

Add these settings to your VS Code settings.json:

```json
{
  // GitHub Copilot Settings
  "github.copilot.enable": {
    "*": true,
    "yaml": false,
    "plaintext": false
  },
  "github.copilot.inlineSuggest.enable": true,
  "github.copilot.suggestions.count": 3,
  
  // Editor Settings for Better AI Experience
  "editor.inlineSuggest.enabled": true,
  "editor.inlineSuggest.showToolbar": "onHover",
  "editor.suggestSelection": "first",
  "editor.tabCompletion": "on",
  "editor.wordBasedSuggestions": false,
  
  // Auto-save for better context
  "files.autoSave": "afterDelay",
  "files.autoSaveDelay": 1000,
  
  // Enhanced IntelliSense
  "editor.quickSuggestions": {
    "other": true,
    "comments": true,
    "strings": true
  },
  
  // Better code formatting
  "editor.formatOnSave": true,
  "editor.formatOnPaste": true,
  "editor.codeActionsOnSave": {
    "source.fixAll": true,
    "source.organizeImports": true
  }
}
```

### Language-Specific Settings

#### JavaScript/TypeScript
```json
{
  "[javascript]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode",
    "editor.codeActionsOnSave": {
      "source.fixAll.eslint": true
    }
  },
  "[typescript]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode",
    "editor.codeActionsOnSave": {
      "source.fixAll.eslint": true
    }
  }
}
```

#### Python
```json
{
  "[python]": {
    "editor.defaultFormatter": "ms-python.black-formatter",
    "editor.formatOnSave": true,
    "editor.codeActionsOnSave": {
      "source.organizeImports": true
    }
  },
  "python.defaultInterpreterPath": "./venv/bin/python",
  "python.linting.enabled": true,
  "python.linting.pylintEnabled": true
}
```

## 🔧 Workspace-Specific Configuration

### .vscode/settings.json
Create workspace-specific settings:

```json
{
  "github.copilot.chat.enabled": true,
  "github.copilot.enable": {
    "*": true,
    "yaml": true,
    "markdown": true
  },
  
  // Project-specific settings
  "files.associations": {
    "*.env.example": "dotenv",
    "*.md": "markdown"
  },
  
  // Exclude files from Copilot context
  "files.exclude": {
    "**/node_modules": true,
    "**/dist": true,
    "**/.env": true,
    "**/coverage": true
  }
}
```

### .vscode/extensions.json
Recommended extensions for the workspace:

```json
{
  "recommendations": [
    "github.copilot",
    "github.copilot-chat",
    "github.copilot-labs",
    "esbenp.prettier-vscode",
    "ms-vscode.vscode-eslint",
    "ms-python.python",
    "bradlc.vscode-tailwindcss",
    "ms-vscode.vscode-json",
    "redhat.vscode-yaml",
    "ms-vscode.powershell"
  ]
}
```

## ⌨️ Keyboard Shortcuts

### Essential Copilot Shortcuts

Add these to your keybindings.json:

```json
[
  {
    "key": "ctrl+shift+i",
    "command": "github.copilot.generate",
    "when": "editorTextFocus"
  },
  {
    "key": "alt+c",
    "command": "github.copilot.toggleCopilot"
  },
  {
    "key": "ctrl+shift+alt+c",
    "command": "github.copilot.chatView.focus"
  },
  {
    "key": "ctrl+alt+i",
    "command": "github.copilot.interactiveEditor.generate"
  }
]
```

### Quick Actions
- `Tab` - Accept suggestion
- `Alt + ]` - Next suggestion  
- `Alt + [` - Previous suggestion
- `Esc` - Dismiss suggestions
- `Ctrl + Enter` - Open suggestions panel

## 🎨 Theme & Appearance

### Recommended Themes for Copilot
These themes work well with Copilot's inline suggestions:

1. **GitHub Dark Default** - Optimal contrast for suggestions
2. **One Dark Pro** - Popular choice with good readability  
3. **Material Theme** - Clean, modern appearance
4. **Dracula Official** - Easy on the eyes for long sessions

### Font Recommendations
```json
{
  "editor.fontFamily": "'Cascadia Code', 'Fira Code', 'JetBrains Mono', Consolas, monospace",
  "editor.fontLigatures": true,
  "editor.fontSize": 14,
  "editor.lineHeight": 1.5
}
```

## 🔧 Advanced Configuration

### Custom Copilot Prompts
Create a prompts folder with reusable templates:

```
.vscode/
├── prompts/
│   ├── function-template.md
│   ├── class-template.md
│   ├── api-endpoint.md
│   └── test-case.md
```

#### function-template.md
```markdown
// Function: ${1:functionName}
// Purpose: ${2:description}
// Parameters: ${3:parameters}
// Returns: ${4:returnType}
// Example usage: ${5:example}
```

### Environment-Specific Settings

#### Development Environment
```json
{
  "github.copilot.advanced": {
    "length": 500,
    "temperature": 0.1,
    "top_p": 1
  }
}
```

#### Team Settings
```json
{
  "github.copilot.enable": {
    "*": true,
    "secrets": false,
    "env": false
  },
  "files.watcherExclude": {
    "**/.git/objects/**": true,
    "**/node_modules/**": true,
    "**/coverage/**": true
  }
}
```

## 🛡️ Security Configuration

### Sensitive File Exclusions
```json
{
  "github.copilot.enable": {
    "secrets": false,
    "password": false,
    "key": false,
    "token": false,
    "credential": false
  },
  
  "files.exclude": {
    "**/.env": true,
    "**/.env.local": true,
    "**/secrets/**": true,
    "**/private/**": true
  }
}
```

### .gitignore Integration
Ensure sensitive files are excluded:

```gitignore
# Copilot should not process these
.env
.env.local
.env.production
secrets/
private/
*.key
*.pem
config/credentials.json
```

## 📊 Performance Optimization

### Memory and CPU Settings
```json
{
  "typescript.preferences.includePackageJsonAutoImports": "off",
  "typescript.suggest.autoImports": false,
  "javascript.suggest.autoImports": false,
  
  // Reduce file watching for better performance
  "files.watcherExclude": {
    "**/node_modules/**": true,
    "**/.git/**": true,
    "**/dist/**": true,
    "**/coverage/**": true
  }
}
```

### Large Project Optimization
```json
{
  "search.exclude": {
    "**/node_modules": true,
    "**/bower_components": true,
    "**/*.code-search": true,
    "**/dist": true,
    "**/coverage": true
  },
  
  "typescript.preferences.maxInlayHintLength": 30,
  "typescript.suggest.includeCompletionsForImportStatements": false
}
```

## 🔄 Backup and Sync

### Settings Sync
Enable VS Code settings sync to share configurations across devices:

1. Open Command Palette (`Ctrl+Shift+P`)
2. Type "Settings Sync: Turn On"
3. Choose what to sync (settings, extensions, keybindings)
4. Sign in with GitHub account

### Manual Backup
Export your settings for manual backup:

```bash
# Export settings
code --list-extensions > extensions.txt

# Copy settings files
cp ~/.config/Code/User/settings.json ./backup/
cp ~/.config/Code/User/keybindings.json ./backup/
```

## 🎯 Team Configuration

### Shared Team Settings
Create a team configuration file:

```json
{
  "name": "GitHub Copilot Team Config",
  "extends": "./base-config.json",
  "overrides": {
    "github.copilot.enable": {
      "*": true,
      "yaml": true,
      "json": true,
      "secrets": false
    },
    "editor.rulers": [80, 120],
    "editor.tabSize": 2,
    "files.eol": "\n"
  }
}
```

### Code Style Enforcement
```json
{
  "editor.codeActionsOnSave": {
    "source.fixAll": true,
    "source.organizeImports": true,
    "source.sortMembers": true
  },
  
  "eslint.workingDirectories": ["./"],
  "prettier.requireConfig": true,
  "prettier.useEditorConfig": true
}
```

## 📋 Configuration Checklist

Before starting development, ensure:

- [ ] ✅ Copilot extension installed and authenticated
- [ ] ✅ Recommended extensions installed
- [ ] ✅ Basic settings configured
- [ ] ✅ Keyboard shortcuts customized
- [ ] ✅ Theme and fonts set up
- [ ] ✅ Language-specific settings applied
- [ ] ✅ Security exclusions configured
- [ ] ✅ Performance settings optimized
- [ ] ✅ Backup/sync enabled

## 🆘 Troubleshooting Configuration

### Common Issues

#### Suggestions Not Appearing
1. Check `github.copilot.enable` settings
2. Verify internet connection
3. Restart VS Code
4. Check file type associations

#### Performance Issues
1. Exclude large directories from file watching
2. Disable unused extensions
3. Reduce suggestion count
4. Clear VS Code cache

#### Settings Not Syncing
1. Verify GitHub authentication
2. Check Settings Sync status
3. Manually export/import if needed
4. Reset sync and try again

---

**Next Step:** With configuration complete, start with [Beginner Lessons](../beginner/README.md) or jump to your appropriate skill level!