#include <iostream>
#include "warp.h"
#include <QString>
//#include <stdio.h>
//#include <stdlib.h>

Warp::Warp()
{
}

QString Warp::callWarp(QString cmd)
{

	std::string warpcmd = cmd.toStdString();
	std::string command = "warp-cli " + warpcmd;

	std::string data;

	FILE* stream;
	const int max_buffer = 256;
	char buffer[max_buffer];
	command.append(" 2>&1");

	stream = popen(command.c_str(), "r");
	if (stream)
	{
		while (!feof(stream))
			if (fgets(buffer, max_buffer, stream) != NULL) data.append(buffer);
		pclose(stream);
	}

	QString qdata = QString::fromStdString(data);

	return qdata;
}
// register();
// teams_enroll();
// delete();
// rotate_keys();
bool status();
// warp_stats();
// settings();
// connect();
// disconnect();
// disable_wifi();
// enable_wifi();
// disable_ethernet();
// enable_ethernet();
// add_trusted_ssid();
// remove_trusted_ssid();
// exclude_private_ips();
// enable_dns_log();
// disable_dns_log();
// account();
// devices();
// network();
// get_virtual_networks();
// set_virtual_network();
// set_mode();
// set_families_mode();
// set_license();
// set_gateway();
// clear_gateway();
// set_custom_endpoint();
// clear_custom_endpoint();
// add_excluded_route();
// remove_excluded_route();
// get_excluded_routes();
// get_included_routes();
// get_excluded_hosts();
// get_included_hosts();
// add_excluded_host();
// remove_excluded_host();
// add_fallback_domain();
// remove_fallback_domain();
// get_fallback_domains();
// restore_fallback_domains();
// get_device_posture();
// override();
// set_proxy_port();
// is_mode_switch_allowed();
// reset_settings();
// get_organization();
// access_reauth();
// get_support_url();
// get_pause_end();
// get_override_end();
// disable_connectivity_checks();
// enable_connectivity_checks();
// help();

enum class Warp::Commands
{
	cmd_register,
	cmd_teams_enroll,
	cmd_delete,
	cmd_rotate_keys,
	cmd_status,
	cmd_warp_stats,
	cmd_settings,
	cmd_connect,
	cmd_disconnect,
	cmd_disable_wifi,
	cmd_enable_wifi,
	cmd_disable_ethernet,
	cmd_enable_ethernet,
	cmd_add_trusted_ssid,
	cmd_remove_trusted_ssid,
	cmd_exclude_private_ips,
	cmd_enable_dns_log,
	cmd_disable_dns_log,
	cmd_account,
	cmd_devices,
	cmd_network,
	cmd_get_virtual_networks,
	cmd_set_virtual_network,
	cmd_set_mode,
	cmd_set_families_mode,
	cmd_set_license,
	cmd_set_gateway,
	cmd_clear_gateway,
	cmd_set_custom_endpoint,
	cmd_clear_custom_endpoint,
	cmd_add_excluded_route,
	cmd_remove_excluded_route,
	cmd_get_excluded_routes,
	cmd_get_included_routes,
	cmd_get_excluded_hosts,
	cmd_get_included_hosts,
	cmd_add_excluded_host,
	cmd_remove_excluded_host,
	cmd_add_fallback_domain,
	cmd_remove_fallback_domain,
	cmd_get_fallback_domains,
	cmd_restore_fallback_domains,
	cmd_get_device_posture,
	cmd_override,
	cmd_set_proxy_port,
	cmd_is_mode_switch_allowed,
	cmd_reset_settings,
	cmd_get_organization,
	cmd_access_reauth,
	cmd_get_support_url,
	cmd_get_pause_end,
	cmd_get_override_end,
	cmd_disable_connectivity_checks,
	cmd_enable_connectivity_checks,
	cmd_help,
};

const QVector<QString> Warp::cmd_strings{

	"register",
	"teams_enroll",
	"delete",
	"rotate_keys",
	"status",
	"warp_stats",
	"settings",
	"connect",
	"disconnect",
	"disable_wifi",
	"enable_wifi",
	"disable_ethernet",
	"enable_ethernet",
	"add_trusted_ssid",
	"remove_trusted_ssid",
	"exclude_private_ips",
	"enable_dns_log",
	"disable_dns_log",
	"account",
	"devices",
	"network",
	"get_virtual_networks",
	"set_virtual_network",
	"set_mode",
	"set_families_mode",
	"set_license",
	"set_gateway",
	"clear_gateway",
	"set_custom_endpoint",
	"clear_custom_endpoint",
	"add_excluded_route",
	"remove_excluded_route",
	"get_excluded_routes",
	"get_included_routes",
	"get_excluded_hosts",
	"get_included_hosts",
	"add_excluded_host",
	"remove_excluded_host",
	"add_fallback_domain",
	"remove_fallback_domain",
	"get_fallback_domains",
	"restore_fallback_domains",
	"get_device_posture",
	"override",
	"set_proxy_port",
	"is_mode_switch_allowed",
	"reset_settings",
	"get_organization",
	"access_reauth",
	"get_support_url",
	"get_pause_end",
	"get_override_end",
	"disable_connectivity_checks",
	"enable_connectivity_checks",
	"help"
};
