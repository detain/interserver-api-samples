package io.swagger.model;

import io.swagger.model.WebsitesOrderJsonServiceOffersItem;
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
  * Schema for the jsonServiceOffers field in WebsitesOrder
 **/
@Schema(description="Schema for the jsonServiceOffers field in WebsitesOrder")
public class WebsitesOrderJsonServiceOffers   {
  
  @Schema(required = true, description = "Array of service offers")
 /**
   * Array of service offers  
  **/
  private List<WebsitesOrderJsonServiceOffersItem> _1026 = new ArrayList<WebsitesOrderJsonServiceOffersItem>();
 /**
   * Array of service offers
   * @return _1026
  **/
  @JsonProperty("1026")
  public List<WebsitesOrderJsonServiceOffersItem> get1026() {
    return _1026;
  }

  public void set1026(List<WebsitesOrderJsonServiceOffersItem> _1026) {
    this._1026 = _1026;
  }

  public WebsitesOrderJsonServiceOffers _1026(List<WebsitesOrderJsonServiceOffersItem> _1026) {
    this._1026 = _1026;
    return this;
  }

  public WebsitesOrderJsonServiceOffers add1026Item(WebsitesOrderJsonServiceOffersItem _1026Item) {
    this._1026.add(_1026Item);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderJsonServiceOffers {\n");
    
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
