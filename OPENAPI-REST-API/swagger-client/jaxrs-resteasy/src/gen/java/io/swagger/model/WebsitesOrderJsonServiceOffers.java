package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsitesOrderJsonServiceOffersItem;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Schema for the jsonServiceOffers field in WebsitesOrder")

public class WebsitesOrderJsonServiceOffers   {
  private List<WebsitesOrderJsonServiceOffersItem> _1026 = new ArrayList<WebsitesOrderJsonServiceOffersItem>();

  /**
   * Array of service offers
   **/
  
  @Schema(required = true, description = "Array of service offers")
  @JsonProperty("1026")
  @NotNull
  public List<WebsitesOrderJsonServiceOffersItem> get1026() {
    return _1026;
  }
  public void set1026(List<WebsitesOrderJsonServiceOffersItem> _1026) {
    this._1026 = _1026;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrderJsonServiceOffers websitesOrderJsonServiceOffers = (WebsitesOrderJsonServiceOffers) o;
    return Objects.equals(_1026, websitesOrderJsonServiceOffers._1026);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
