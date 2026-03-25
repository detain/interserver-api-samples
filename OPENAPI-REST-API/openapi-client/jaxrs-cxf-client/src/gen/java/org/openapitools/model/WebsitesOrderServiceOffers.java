package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.WebsitesOrderServiceOffer;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The service offers data.
 */
@ApiModel(description="The service offers data.")

public class WebsitesOrderServiceOffers  {
  
  @ApiModelProperty(required = true, value = "")

  private List<WebsitesOrderServiceOffer> _1026 = new ArrayList<>();
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrderServiceOffers websitesOrderServiceOffers = (WebsitesOrderServiceOffers) o;
    return Objects.equals(this._1026, websitesOrderServiceOffers._1026);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_1026);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

