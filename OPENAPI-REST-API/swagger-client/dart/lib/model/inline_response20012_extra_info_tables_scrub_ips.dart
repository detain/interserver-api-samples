part of swagger.api;

class InlineResponse20012ExtraInfoTablesScrubIps {
  
  String title = null;

  List<InlineResponse20012ExtraInfoTablesScrubIpsRows> rows = [];

  InlineResponse20012ExtraInfoTablesScrubIps();

  @override
  String toString() {
    return 'InlineResponse20012ExtraInfoTablesScrubIps[title=$title, rows=$rows, ]';
  }

  InlineResponse20012ExtraInfoTablesScrubIps.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    title = json['title'];
    rows = InlineResponse20012ExtraInfoTablesScrubIpsRows.listFromJson(json['rows']);
  }

  Map<String, dynamic> toJson() {
    return {
      'title': title,
      'rows': rows
     };
  }

  static List<InlineResponse20012ExtraInfoTablesScrubIps> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20012ExtraInfoTablesScrubIps>() : json.map((value) => new InlineResponse20012ExtraInfoTablesScrubIps.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20012ExtraInfoTablesScrubIps> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20012ExtraInfoTablesScrubIps>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20012ExtraInfoTablesScrubIps.fromJson(value));
    }
    return map;
  }
}
