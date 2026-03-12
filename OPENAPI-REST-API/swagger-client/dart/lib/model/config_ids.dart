part of swagger.api;

class ConfigIds {
  /* Configuration ID for the selected memory option. */
  int memory = null;
/* Configuration ID for the selected hard drive option. */
  int hd = null;
/* Configuration ID for the selected bandwidth option. */
  int bandwidth = null;
/* Configuration ID for the selected IP block option. */
  int ips = null;
/* Configuration ID for the selected operating system. */
  int os = null;
/* Configuration ID for the selected control panel. */
  int cp = null;
/* Configuration ID for the selected RAID option. */
  int raid = null;

  ConfigIds();

  @override
  String toString() {
    return 'ConfigIds[memory=$memory, hd=$hd, bandwidth=$bandwidth, ips=$ips, os=$os, cp=$cp, raid=$raid, ]';
  }

  ConfigIds.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    memory = json['memory'];
    hd = json['hd'];
    bandwidth = json['bandwidth'];
    ips = json['ips'];
    os = json['os'];
    cp = json['cp'];
    raid = json['raid'];
  }

  Map<String, dynamic> toJson() {
    return {
      'memory': memory,
      'hd': hd,
      'bandwidth': bandwidth,
      'ips': ips,
      'os': os,
      'cp': cp,
      'raid': raid
     };
  }

  static List<ConfigIds> listFromJson(List<dynamic> json) {
    return json == null ? new List<ConfigIds>() : json.map((value) => new ConfigIds.fromJson(value)).toList();
  }

  static Map<String, ConfigIds> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, ConfigIds>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new ConfigIds.fromJson(value));
    }
    return map;
  }
}
