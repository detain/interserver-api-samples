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
  * Map of dedicated server service IDs to their hostnames for the account dashboard.
 **/
@Schema(description="Map of dedicated server service IDs to their hostnames for the account dashboard.")
public class HomeServicesServersLinks   {
  
  @Schema(example = "anotherserver.com", description = "Link to a server.")
 /**
   * Link to a server.  
  **/
  private String _16058 = null;
 /**
   * Link to a server.
   * @return _16058
  **/
  @JsonProperty("16058")
  public String get16058() {
    return _16058;
  }

  public void set16058(String _16058) {
    this._16058 = _16058;
  }

  public HomeServicesServersLinks _16058(String _16058) {
    this._16058 = _16058;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesServersLinks {\n");
    
    sb.append("    _16058: ").append(toIndentedString(_16058)).append("\n");
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
