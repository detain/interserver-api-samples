package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A single tutorial entry with a label and URL.
 */
@ApiModel(description="A single tutorial entry with a label and URL.")

public class MailTutorialsTableRow  {
  
 /**
  * The description of the tutorials table row.
  */
  @ApiModelProperty(example = "cPanel Tutorial", value = "The description of the tutorials table row.")

  private String desc;

 /**
  * The value of the tutorials table row.
  */
  @ApiModelProperty(example = "<a class=\"link\" href=\"https://mail.baby/cpanel/\" target=\"_blank\">Click Here</a>", value = "The value of the tutorials table row.")

  private String value;
 /**
   * The description of the tutorials table row.
   * @return desc
  **/
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public MailTutorialsTableRow desc(String desc) {
    this.desc = desc;
    return this;
  }

 /**
   * The value of the tutorials table row.
   * @return value
  **/
  @JsonProperty("value")
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public MailTutorialsTableRow value(String value) {
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
    MailTutorialsTableRow mailTutorialsTableRow = (MailTutorialsTableRow) o;
    return Objects.equals(this.desc, mailTutorialsTableRow.desc) &&
        Objects.equals(this.value, mailTutorialsTableRow.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailTutorialsTableRow {\n");
    
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
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

