#
# Regular cron jobs for the isistest package
#
0 4	* * *	root	[ -x /usr/bin/isistest_maintenance ] && /usr/bin/isistest_maintenance
