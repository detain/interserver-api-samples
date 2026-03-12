part of swagger.api;

class InlineResponse20012ExtraInfoTables {
  
  InlineResponse20012ExtraInfoTablesScrubIps scrubIps = null;

  InlineResponse20012ExtraInfoTables();

  @override
  String toString() {
    return 'InlineResponse20012ExtraInfoTables[scrubIps=$scrubIps, ]';
  }

  InlineResponse20012ExtraInfoTables.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    scrubIps = new InlineResponse20012ExtraInfoTablesScrubIps.fromJson(json['scrub_ips']);
  }

  Map<String, dynamic> toJson() {
    return {
      'scrub_ips': scrubIps
     };
  }

  static List<InlineResponse20012ExtraInfoTables> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20012ExtraInfoTables>() : json.map((value) => new InlineResponse20012ExtraInfoTables.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20012ExtraInfoTables> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20012ExtraInfoTables>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20012ExtraInfoTables.fromJson(value));
    }
    return map;
  }
}
