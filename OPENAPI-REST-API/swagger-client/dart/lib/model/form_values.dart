part of swagger.api;

class FormValues {
  /* Selected memory option ID. */
  int memory = null;
/* Selected bandwidth option ID. */
  int bandwidth = null;
/* Selected IP block option ID. */
  int ips = null;
/* Selected operating system option ID. */
  int os = null;
/* Selected control panel option ID. */
  int cp = null;
/* Selected RAID option ID. */
  int raid = null;
/* Selected hard drive option ID. */
  int hd = null;
/* Selected datacenter region ID. */
  int region = null;

  FormValues();

  @override
  String toString() {
    return 'FormValues[memory=$memory, bandwidth=$bandwidth, ips=$ips, os=$os, cp=$cp, raid=$raid, hd=$hd, region=$region, ]';
  }

  FormValues.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    memory = json['memory'];
    bandwidth = json['bandwidth'];
    ips = json['ips'];
    os = json['os'];
    cp = json['cp'];
    raid = json['raid'];
    hd = json['hd'];
    region = json['region'];
  }

  Map<String, dynamic> toJson() {
    return {
      'memory': memory,
      'bandwidth': bandwidth,
      'ips': ips,
      'os': os,
      'cp': cp,
      'raid': raid,
      'hd': hd,
      'region': region
     };
  }

  static List<FormValues> listFromJson(List<dynamic> json) {
    return json == null ? new List<FormValues>() : json.map((value) => new FormValues.fromJson(value)).toList();
  }

  static Map<String, FormValues> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, FormValues>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new FormValues.fromJson(value));
    }
    return map;
  }
}
