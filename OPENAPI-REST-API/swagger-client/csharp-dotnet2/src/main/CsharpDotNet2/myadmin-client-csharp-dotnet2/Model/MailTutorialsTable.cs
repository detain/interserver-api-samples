using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A table of tutorial links displayed for a mail service.
  /// </summary>
  [DataContract]
  public class MailTutorialsTable {
    /// <summary>
    /// The title of the tutorials table.
    /// </summary>
    /// <value>The title of the tutorials table.</value>
    [DataMember(Name="title", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "title")]
    public string Title { get; set; }

    /// <summary>
    /// The rows of the tutorials table.
    /// </summary>
    /// <value>The rows of the tutorials table.</value>
    [DataMember(Name="rows", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rows")]
    public List<MailTutorialsTableRow> Rows { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailTutorialsTable {\n");
      sb.Append("  Title: ").Append(Title).Append("\n");
      sb.Append("  Rows: ").Append(Rows).Append("\n");
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
