part of swagger.api;

class PaymentInvoiceRows {
  
  PaymentInvoiceRows();

  @override
  String toString() {
    return 'PaymentInvoiceRows[]';
  }

  PaymentInvoiceRows.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
  }

  Map<String, dynamic> toJson() {
    return {
     };
  }

  static List<PaymentInvoiceRows> listFromJson(List<dynamic> json) {
    return json == null ? new List<PaymentInvoiceRows>() : json.map((value) => new PaymentInvoiceRows.fromJson(value)).toList();
  }

  static Map<String, PaymentInvoiceRows> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, PaymentInvoiceRows>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new PaymentInvoiceRows.fromJson(value));
    }
    return map;
  }
}
