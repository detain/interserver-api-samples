package io.swagger.model;

import io.swagger.model.WebsitesOrderPackagesInfo;
import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * The packages data.
 **/
@Schema(description="The packages data.")
public class WebsitesOrderPackges   {
  
  @Schema(required = true, description = "")
  private WebsitesOrderPackagesInfo _11440 = null;
 /**
   * Get _11440
   * @return _11440
  **/
  @JsonProperty("11440")
  @NotNull
  public WebsitesOrderPackagesInfo get11440() {
    return _11440;
  }

  public void set11440(WebsitesOrderPackagesInfo _11440) {
    this._11440 = _11440;
  }

  public WebsitesOrderPackges _11440(WebsitesOrderPackagesInfo _11440) {
    this._11440 = _11440;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderPackges {\n");
    
    sb.append("    _11440: ").append(toIndentedString(_11440)).append("\n");
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
