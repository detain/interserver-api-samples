part of swagger.api;

class InlineResponse20024 {
  
  String message = null;

  bool success = null;

  InlineResponse20024();

  @override
  String toString() {
    return 'InlineResponse20024[message=$message, success=$success, ]';
  }

  InlineResponse20024.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    message = json['message'];
    success = json['success'];
  }

  Map<String, dynamic> toJson() {
    return {
      'message': message,
      'success': success
     };
  }

  static List<InlineResponse20024> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20024>() : json.map((value) => new InlineResponse20024.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20024> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20024>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20024.fromJson(value));
    }
    return map;
  }
}
