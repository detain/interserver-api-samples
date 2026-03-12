using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
  /// </summary>
  [DataContract]
  public class ChargeInvoiceRows {
    /// <summary>
    /// Whether the invoice retrieval was successful.
    /// </summary>
    /// <value>Whether the invoice retrieval was successful.</value>
    [DataMember(Name="success", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "success")]
    public bool? Success { get; set; }

    /// <summary>
    /// List of invoices for the service.
    /// </summary>
    /// <value>List of invoices for the service.</value>
    [DataMember(Name="invoices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoices")]
    public Dictionary<string, ChargeInvoiceRowsInvoices> Invoices { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ChargeInvoiceRows {\n");
      sb.Append("  Success: ").Append(Success).Append("\n");
      sb.Append("  Invoices: ").Append(Invoices).Append("\n");
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
