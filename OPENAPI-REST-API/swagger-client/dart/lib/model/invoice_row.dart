part of swagger.api;

class InvoiceRow {
  
  InvoiceRow();

  @override
  String toString() {
    return 'InvoiceRow[]';
  }

  InvoiceRow.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
  }

  Map<String, dynamic> toJson() {
    return {
     };
  }

  static List<InvoiceRow> listFromJson(List<dynamic> json) {
    return json == null ? new List<InvoiceRow>() : json.map((value) => new InvoiceRow.fromJson(value)).toList();
  }

  static Map<String, InvoiceRow> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InvoiceRow>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InvoiceRow.fromJson(value));
    }
    return map;
  }
}
