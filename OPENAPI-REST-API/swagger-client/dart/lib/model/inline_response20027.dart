part of swagger.api;

class InlineResponse20027 {
  
  List<InlineResponse20027Bandwidth> bandwidth = [];

  List<InlineResponse20027Ips> ips = [];

  List<InlineResponse20027Os> os = [];

  List<InlineResponse20027Cp> cp = [];

  List<InlineResponse20027Raid> raid = [];

  InlineResponse20027();

  @override
  String toString() {
    return 'InlineResponse20027[bandwidth=$bandwidth, ips=$ips, os=$os, cp=$cp, raid=$raid, ]';
  }

  InlineResponse20027.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    bandwidth = InlineResponse20027Bandwidth.listFromJson(json['bandwidth']);
    ips = InlineResponse20027Ips.listFromJson(json['ips']);
    os = InlineResponse20027Os.listFromJson(json['os']);
    cp = InlineResponse20027Cp.listFromJson(json['cp']);
    raid = InlineResponse20027Raid.listFromJson(json['raid']);
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

  static List<InlineResponse20027> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20027>() : json.map((value) => new InlineResponse20027.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20027> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20027>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20027.fromJson(value));
    }
    return map;
  }
}
