package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A single row in the mail service supplementary information table.
 */
@ApiModel(description="A single row in the mail service supplementary information table.")

public class MailExtraInfoTableRow  {
  
 /**
  * The description of the extra info table row.
  */
  @ApiModelProperty(example = "SMTP Server", value = "The description of the extra info table row.")

  private String desc;

 /**
  * The value of the extra info table row.
  */
  @ApiModelProperty(example = "relay.mailbaby.net", value = "The value of the extra info table row.")

  private String value;
 /**
   * The description of the extra info table row.
   * @return desc
  **/
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public MailExtraInfoTableRow desc(String desc) {
    this.desc = desc;
    return this;
  }

 /**
   * The value of the extra info table row.
   * @return value
  **/
  @JsonProperty("value")
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public MailExtraInfoTableRow value(String value) {
    this.value = value;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailExtraInfoTableRow mailExtraInfoTableRow = (MailExtraInfoTableRow) o;
    return Objects.equals(this.desc, mailExtraInfoTableRow.desc) &&
        Objects.equals(this.value, mailExtraInfoTableRow.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailExtraInfoTableRow {\n");
    
    sb.append("    desc: ").append(toIndentedString(desc)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

