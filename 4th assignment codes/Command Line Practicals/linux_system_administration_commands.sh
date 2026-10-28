# Linux System Administration Commands
# Source: Linux_System_Administration_Practical_With_Screenshots.pdf

# 1. File and directory management
pwd
mkdir -p FileLab/Documents FileLab/Backup
cd FileLab
echo 'Hello Linux' > notes.txt
ls -l

# 2. Copy, move, and remove files
cp notes.txt Backup/notes_copy.txt
mv notes.txt Documents/welcome.txt
ls -R
rm Backup/notes_copy.txt
ls -R

# 3. File permissions
touch script.sh
ls -l script.sh
chmod 754 script.sh
ls -l script.sh

# 4. Change ownership (requires administrator privileges)
sudo chown root:root script.sh
ls -l script.sh

# 5. Access Control Lists (ACL)
getfacl script.sh
sudo setfacl -m u:student:rw script.sh
getfacl script.sh
# Install the acl package if needed:
# Debian/Ubuntu: sudo apt install acl
# Fedora/RHEL:   sudo dnf install acl

# 6. Process and system management
ps
top
uname -a
free -h
# Replace <PID> with a real process ID before running:
# kill <PID>

# 7. Package, service, and log management
# Debian/Ubuntu:
sudo apt update
sudo apt install acl
# Fedora/RHEL:
sudo dnf check-update
sudo dnf install acl
# Service may be named ssh or sshd:
systemctl status ssh
journalctl -n 20

# 8. Networking
ip addr
ping -c 4 127.0.0.1
ss -tuln
ip route
