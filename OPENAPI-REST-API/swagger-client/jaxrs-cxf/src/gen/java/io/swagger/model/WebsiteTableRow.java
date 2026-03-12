package io.swagger.model;

import javax.validation.constraints.*;

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

public class WebsiteTableRow   {
  
  @Schema(description = "Description for the row")
 /**
   * Description for the row  
  **/
  private String desc = null;
  
  @Schema(description = "Value for the row")
 /**
   * Value for the row  
  **/
  private String value = null;
 /**
   * Description for the row
   * @return desc
  **/
  @JsonProperty("desc")
  @NotNull
  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public WebsiteTableRow desc(String desc) {
    this.desc = desc;
    return this;
  }

 /**
   * Value for the row
   * @return value
  **/
  @JsonProperty("value")
  @NotNull
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public WebsiteTableRow value(String value) {
    this.value = value;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteTableRow {\n");
    
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
