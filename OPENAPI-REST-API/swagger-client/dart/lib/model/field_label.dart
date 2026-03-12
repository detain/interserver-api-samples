part of swagger.api;

class FieldLabel {
  
  String name = null;

  int active = null;

  FieldLabel();

  @override
  String toString() {
    return 'FieldLabel[name=$name, active=$active, ]';
  }

  FieldLabel.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    name = json['name'];
    active = json['active'];
  }

  Map<String, dynamic> toJson() {
    return {
      'name': name,
      'active': active
     };
  }

  static List<FieldLabel> listFromJson(List<dynamic> json) {
    return json == null ? new List<FieldLabel>() : json.map((value) => new FieldLabel.fromJson(value)).toList();
  }

  static Map<String, FieldLabel> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, FieldLabel>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new FieldLabel.fromJson(value));
    }
    return map;
  }
}
