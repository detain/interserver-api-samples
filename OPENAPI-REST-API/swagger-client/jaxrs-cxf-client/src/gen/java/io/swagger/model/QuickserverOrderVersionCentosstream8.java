package io.swagger.model;


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

public class QuickserverOrderVersionCentosstream8   {
  
  @Schema(example = "8 Stream (64 bits)", description = "Version details of CentOS Stream 8.")
 /**
   * Version details of CentOS Stream 8.  
  **/
  private String centosstream8 = null;
 /**
   * Version details of CentOS Stream 8.
   * @return centosstream8
  **/
  @JsonProperty("centosstream-8")
  public String getCentosstream8() {
    return centosstream8;
  }

  public void setCentosstream8(String centosstream8) {
    this.centosstream8 = centosstream8;
  }

  public QuickserverOrderVersionCentosstream8 centosstream8(String centosstream8) {
    this.centosstream8 = centosstream8;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderVersionCentosstream8 {\n");
    
    sb.append("    centosstream8: ").append(toIndentedString(centosstream8)).append("\n");
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
