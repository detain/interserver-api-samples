package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.WebsitesOrderJsonServiceOffersItem;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Schema for the jsonServiceOffers field in WebsitesOrder
 */
@ApiModel(description="Schema for the jsonServiceOffers field in WebsitesOrder")

public class WebsitesOrderJsonServiceOffers  {
  
 /**
  * Array of service offers
  */
  @ApiModelProperty(required = true, value = "Array of service offers")

  private List<WebsitesOrderJsonServiceOffersItem> _1026 = new ArrayList<>();
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers = (WebsitesOrderJsonServiceOffers) o;
    return Objects.equals(this._1026, websitesOrderJsonServiceOffers._1026);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_1026);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

