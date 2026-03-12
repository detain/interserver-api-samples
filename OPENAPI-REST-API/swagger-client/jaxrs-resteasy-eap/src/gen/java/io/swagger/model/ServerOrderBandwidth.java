package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A bandwidth option available when ordering a dedicated server.")

public class ServerOrderBandwidth   {
  private String id = null;
  private Integer price = null;
  private String img = null;
  private String shortDesc = null;
  private String longDesc = null;
  private String type = null;
  private String qty = null;
  private String active = null;
  private Integer monthlyPrice = null;
  private String priceDisplay = null;
  private String monthlyPriceDisplay = null;

  /**
   * Bandwidth ID.
   **/
  
  @Schema(example = "15", description = "Bandwidth ID.")
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Bandwidth price.
   **/
  
  @Schema(example = "0", description = "Bandwidth price.")
  @JsonProperty("price")
  @NotNull
  public Integer getPrice() {
    return price;
  }
  public void setPrice(Integer price) {
    this.price = price;
  }

  /**
   * Bandwidth image.
   **/
  
  @Schema(example = "bandwidth.jpg", description = "Bandwidth image.")
  @JsonProperty("img")
  @NotNull
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  /**
   * Short description of the bandwidth.
   **/
  
  @Schema(example = "150TB (10Gb Port)", description = "Short description of the bandwidth.")
  @JsonProperty("short_desc")
  @NotNull
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   * Long description of the bandwidth.
   **/
  
  @Schema(example = " - 2000GB Bandwidth...", description = "Long description of the bandwidth.")
  @JsonProperty("long_desc")
  @NotNull
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   * Bandwidth type.
   **/
  
  @Schema(example = "Standard", description = "Bandwidth type.")
  @JsonProperty("type")
  @NotNull
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * Quantity of bandwidth.
   **/
  
  @Schema(example = "4000", description = "Quantity of bandwidth.")
  @JsonProperty("qty")
  @NotNull
  public String getQty() {
    return qty;
  }
  public void setQty(String qty) {
    this.qty = qty;
  }

  /**
   * Active status.
   **/
  
  @Schema(example = "1", description = "Active status.")
  @JsonProperty("active")
  @NotNull
  public String getActive() {
    return active;
  }
  public void setActive(String active) {
    this.active = active;
  }

  /**
   * Monthly price.
   **/
  
  @Schema(example = "15", description = "Monthly price.")
  @JsonProperty("monthly_price")
  @NotNull
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   * Display of bandwidth price.
   **/
  
  @Schema(example = "$0.00", description = "Display of bandwidth price.")
  @JsonProperty("price_display")
  @NotNull
  public String getPriceDisplay() {
    return priceDisplay;
  }
  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  /**
   * Display of monthly bandwidth price.
   **/
  
  @Schema(example = "$15.00", description = "Display of monthly bandwidth price.")
  @JsonProperty("monthly_price_display")
  @NotNull
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }
  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderBandwidth serverOrderBandwidth = (ServerOrderBandwidth) o;
    return Objects.equals(id, serverOrderBandwidth.id) &&
        Objects.equals(price, serverOrderBandwidth.price) &&
        Objects.equals(img, serverOrderBandwidth.img) &&
        Objects.equals(shortDesc, serverOrderBandwidth.shortDesc) &&
        Objects.equals(longDesc, serverOrderBandwidth.longDesc) &&
        Objects.equals(type, serverOrderBandwidth.type) &&
        Objects.equals(qty, serverOrderBandwidth.qty) &&
        Objects.equals(active, serverOrderBandwidth.active) &&
        Objects.equals(monthlyPrice, serverOrderBandwidth.monthlyPrice) &&
        Objects.equals(priceDisplay, serverOrderBandwidth.priceDisplay) &&
        Objects.equals(monthlyPriceDisplay, serverOrderBandwidth.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, type, qty, active, monthlyPrice, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderBandwidth {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    qty: ").append(toIndentedString(qty)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    priceDisplay: ").append(toIndentedString(priceDisplay)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
