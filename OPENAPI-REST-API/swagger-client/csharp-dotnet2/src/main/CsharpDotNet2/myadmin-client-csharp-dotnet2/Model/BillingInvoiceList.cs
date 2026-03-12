using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Summary list of invoices for the account.
  /// </summary>
  [DataContract]
  public class BillingInvoiceList {
    /// <summary>
    /// Invoice rows returned for the account.
    /// </summary>
    /// <value>Invoice rows returned for the account.</value>
    [DataMember(Name="rows", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rows")]
    public List<Object> Rows { get; set; }

    /// <summary>
    /// Totals and summary data for the invoices list.
    /// </summary>
    /// <value>Totals and summary data for the invoices list.</value>
    [DataMember(Name="summary", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "summary")]
    public Object Summary { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BillingInvoiceList {\n");
      sb.Append("  Rows: ").Append(Rows).Append("\n");
      sb.Append("  Summary: ").Append(Summary).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
