package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * A single tutorial entry with a label and URL.
 **/
@Schema(description="A single tutorial entry with a label and URL.")
public class MailTutorialsTableRow   {
  
  @Schema(example = "cPanel Tutorial", description = "The description of the tutorials table row.")
 /**
   * The description of the tutorials table row.  
  **/
  private String desc = null;
  
  @Schema(example = "<a class=\"link\" href=\"https://mail.baby/cpanel/\" target=\"_blank\">Click Here</a>", description = "The value of the tutorials table row.")
 /**
   * The value of the tutorials table row.  
  **/
  private String value = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
