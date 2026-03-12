part of swagger.api;

class Invoice {
  
  int id = null;

  Invoice();

  @override
  String toString() {
    return 'Invoice[id=$id, ]';
  }

  Invoice.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['id'];
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id
     };
  }

  static List<Invoice> listFromJson(List<dynamic> json) {
    return json == null ? new List<Invoice>() : json.map((value) => new Invoice.fromJson(value)).toList();
  }

  static Map<String, Invoice> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, Invoice>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new Invoice.fromJson(value));
    }
    return map;
  }
}
