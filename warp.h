#pragma once
#include <QString>
#include <QVector>

class Warp{

private:
    QString callWarp(QString cmd);
    const static QVector<QString> cmd_strings;

public:
    Warp();


    enum class Commands;

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

};
