package io.swagger.model;

import io.swagger.model.WebsitesOrderServiceOffer;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The service offers data.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The service offers data.")

public class WebsitesOrderServiceOffers   {

  private @Valid List<WebsitesOrderServiceOffer> _1026 = new ArrayList<WebsitesOrderServiceOffer>();

  /**
   **/
  public WebsitesOrderServiceOffers _1026(List<WebsitesOrderServiceOffer> _1026) {
    this._1026 = _1026;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("1026")
  @NotNull

  public List<WebsitesOrderServiceOffer> get1026() {
    return _1026;
  }
  public void set1026(List<WebsitesOrderServiceOffer> _1026) {
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
    WebsitesOrderServiceOffers websitesOrderServiceOffers = (WebsitesOrderServiceOffers) o;
    return Objects.equals(_1026, websitesOrderServiceOffers._1026);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
