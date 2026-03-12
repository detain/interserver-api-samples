part of swagger.api;

class InlineResponse20026 {
  
  List<InlineResponse20026Bandwidth> bandwidth = [];

  List<InlineResponse20026Ips> ips = [];

  List<InlineResponse20026Os> os = [];

  List<InlineResponse20026Cp> cp = [];

  List<InlineResponse20026Raid> raid = [];

  InlineResponse20026();

  @override
  String toString() {
    return 'InlineResponse20026[bandwidth=$bandwidth, ips=$ips, os=$os, cp=$cp, raid=$raid, ]';
  }

  InlineResponse20026.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    bandwidth = InlineResponse20026Bandwidth.listFromJson(json['bandwidth']);
    ips = InlineResponse20026Ips.listFromJson(json['ips']);
    os = InlineResponse20026Os.listFromJson(json['os']);
    cp = InlineResponse20026Cp.listFromJson(json['cp']);
    raid = InlineResponse20026Raid.listFromJson(json['raid']);
  }

  Map<String, dynamic> toJson() {
    return {
      'bandwidth': bandwidth,
      'ips': ips,
      'os': os,
      'cp': cp,
      'raid': raid
     };
  }

  static List<InlineResponse20026> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20026>() : json.map((value) => new InlineResponse20026.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20026> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20026>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20026.fromJson(value));
    }
    return map;
  }
}
