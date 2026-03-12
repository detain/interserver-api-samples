part of swagger.api;

class InlineResponse20012ExtraInfoTablesScrubIpsRows {
  
  String desc = null;

  String value = null;

  InlineResponse20012ExtraInfoTablesScrubIpsRows();

  @override
  String toString() {
    return 'InlineResponse20012ExtraInfoTablesScrubIpsRows[desc=$desc, value=$value, ]';
  }

  InlineResponse20012ExtraInfoTablesScrubIpsRows.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    desc = json['desc'];
    value = json['value'];
  }

  Map<String, dynamic> toJson() {
    return {
      'desc': desc,
      'value': value
     };
  }

  static List<InlineResponse20012ExtraInfoTablesScrubIpsRows> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20012ExtraInfoTablesScrubIpsRows>() : json.map((value) => new InlineResponse20012ExtraInfoTablesScrubIpsRows.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20012ExtraInfoTablesScrubIpsRows> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20012ExtraInfoTablesScrubIpsRows>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20012ExtraInfoTablesScrubIpsRows.fromJson(value));
    }
    return map;
  }
}
