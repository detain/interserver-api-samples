using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// An email record
  /// </summary>
  [DataContract]
  public class MailLogEntry {
    /// <summary>
    /// internal db id
    /// </summary>
    /// <value>internal db id</value>
    [DataMember(Name="_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "_id")]
    public int? Id { get; set; }

    /// <summary>
    /// mail id
    /// </summary>
    /// <value>mail id</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public string Id { get; set; }

    /// <summary>
    /// from address
    /// </summary>
    /// <value>from address</value>
    [DataMember(Name="from", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "from")]
    public string From { get; set; }

    /// <summary>
    /// to address
    /// </summary>
    /// <value>to address</value>
    [DataMember(Name="to", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "to")]
    public string To { get; set; }

    /// <summary>
    /// email subject
    /// </summary>
    /// <value>email subject</value>
    [DataMember(Name="subject", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "subject")]
    public string Subject { get; set; }

    /// <summary>
    /// message id
    /// </summary>
    /// <value>message id</value>
    [DataMember(Name="messageId", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "messageId")]
    public string MessageId { get; set; }

    /// <summary>
    /// creation date
    /// </summary>
    /// <value>creation date</value>
    [DataMember(Name="created", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "created")]
    public string Created { get; set; }

    /// <summary>
    /// creation timestamp
    /// </summary>
    /// <value>creation timestamp</value>
    [DataMember(Name="time", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "time")]
    public int? Time { get; set; }

    /// <summary>
    /// user account
    /// </summary>
    /// <value>user account</value>
    [DataMember(Name="user", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "user")]
    public string User { get; set; }

    /// <summary>
    /// transaction type
    /// </summary>
    /// <value>transaction type</value>
    [DataMember(Name="transtype", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "transtype")]
    public string Transtype { get; set; }

    /// <summary>
    /// origin ip
    /// </summary>
    /// <value>origin ip</value>
    [DataMember(Name="origin", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "origin")]
    public string Origin { get; set; }

    /// <summary>
    /// interface name
    /// </summary>
    /// <value>interface name</value>
    [DataMember(Name="interface", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "interface")]
    public string _Interface { get; set; }

    /// <summary>
    /// sending zone
    /// </summary>
    /// <value>sending zone</value>
    [DataMember(Name="sendingZone", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sendingZone")]
    public string SendingZone { get; set; }

    /// <summary>
    /// email body size in bytes
    /// </summary>
    /// <value>email body size in bytes</value>
    [DataMember(Name="bodySize", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bodySize")]
    public int? BodySize { get; set; }

    /// <summary>
    /// index of email in the to adderess list
    /// </summary>
    /// <value>index of email in the to adderess list</value>
    [DataMember(Name="seq", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "seq")]
    public int? Seq { get; set; }

    /// <summary>
    /// to address this email is being sent to
    /// </summary>
    /// <value>to address this email is being sent to</value>
    [DataMember(Name="recipient", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "recipient")]
    public string Recipient { get; set; }

    /// <summary>
    /// to address domain
    /// </summary>
    /// <value>to address domain</value>
    [DataMember(Name="domain", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain")]
    public string Domain { get; set; }

    /// <summary>
    /// locked status
    /// </summary>
    /// <value>locked status</value>
    [DataMember(Name="locked", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "locked")]
    public int? Locked { get; set; }

    /// <summary>
    /// lock timestamp
    /// </summary>
    /// <value>lock timestamp</value>
    [DataMember(Name="lockTime", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "lockTime")]
    public int? LockTime { get; set; }

    /// <summary>
    /// assigned server
    /// </summary>
    /// <value>assigned server</value>
    [DataMember(Name="assigned", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "assigned")]
    public string Assigned { get; set; }

    /// <summary>
    /// queued timestamp
    /// </summary>
    /// <value>queued timestamp</value>
    [DataMember(Name="queued", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "queued")]
    public string Queued { get; set; }

    /// <summary>
    /// mx hostname
    /// </summary>
    /// <value>mx hostname</value>
    [DataMember(Name="mxHostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mxHostname")]
    public string MxHostname { get; set; }

    /// <summary>
    /// mail delivery response
    /// </summary>
    /// <value>mail delivery response</value>
    [DataMember(Name="response", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "response")]
    public string Response { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailLogEntry {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  From: ").Append(From).Append("\n");
      sb.Append("  To: ").Append(To).Append("\n");
      sb.Append("  Subject: ").Append(Subject).Append("\n");
      sb.Append("  MessageId: ").Append(MessageId).Append("\n");
      sb.Append("  Created: ").Append(Created).Append("\n");
      sb.Append("  Time: ").Append(Time).Append("\n");
      sb.Append("  User: ").Append(User).Append("\n");
      sb.Append("  Transtype: ").Append(Transtype).Append("\n");
      sb.Append("  Origin: ").Append(Origin).Append("\n");
      sb.Append("  _Interface: ").Append(_Interface).Append("\n");
      sb.Append("  SendingZone: ").Append(SendingZone).Append("\n");
      sb.Append("  BodySize: ").Append(BodySize).Append("\n");
      sb.Append("  Seq: ").Append(Seq).Append("\n");
      sb.Append("  Recipient: ").Append(Recipient).Append("\n");
      sb.Append("  Domain: ").Append(Domain).Append("\n");
      sb.Append("  Locked: ").Append(Locked).Append("\n");
      sb.Append("  LockTime: ").Append(LockTime).Append("\n");
      sb.Append("  Assigned: ").Append(Assigned).Append("\n");
      sb.Append("  Queued: ").Append(Queued).Append("\n");
      sb.Append("  MxHostname: ").Append(MxHostname).Append("\n");
      sb.Append("  Response: ").Append(Response).Append("\n");
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
