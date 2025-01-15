@echo off
for /r %%d in (*vc9*.vcxproj) do (
    echo Upgrading: %%d
    devenv "%%d" /upgrade
)
echo Upgrade completed!
pause
