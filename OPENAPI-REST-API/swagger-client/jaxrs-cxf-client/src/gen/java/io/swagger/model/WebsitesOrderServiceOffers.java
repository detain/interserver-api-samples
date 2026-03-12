package io.swagger.model;

import io.swagger.model.WebsitesOrderServiceOffer;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;

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
  * The service offers data.
 **/
@Schema(description="The service offers data.")
public class WebsitesOrderServiceOffers   {
  
  @Schema(required = true, description = "")
  private List<WebsitesOrderServiceOffer> _1026 = new ArrayList<WebsitesOrderServiceOffer>();
 /**
   * Get _1026
   * @return _1026
  **/
  @JsonProperty("1026")
  public List<WebsitesOrderServiceOffer> get1026() {
    return _1026;
  }

  public void set1026(List<WebsitesOrderServiceOffer> _1026) {
    this._1026 = _1026;
  }

  public WebsitesOrderServiceOffers _1026(List<WebsitesOrderServiceOffer> _1026) {
    this._1026 = _1026;
    return this;
  }

  public WebsitesOrderServiceOffers add1026Item(WebsitesOrderServiceOffer _1026Item) {
    this._1026.add(_1026Item);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderServiceOffers {\n");
    
    sb.append("    _1026: ").append(toIndentedString(_1026)).append("\n");
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
