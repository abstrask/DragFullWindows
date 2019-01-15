# DragFullWindows

Citrix Receiver seems to disable "Show Windows contents while dragging", every time a published application is launched.

This is a tiny application that simply re-enables the setting, but unlike updating the corresponding registry value, it takes effect immediately.

Repo also includes template to import in Task Scheduler, for running the application periodically. Compiled executable under /bin.

## Credits

* https://stackoverflow.com/a/1115124/1256551
* https://gist.github.com/neokril/8035995.
