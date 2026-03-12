package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A bandwidth option available when ordering a dedicated server.
 */
@Schema(description = "A bandwidth option available when ordering a dedicated server.")
@Validated
@Introspected

public class ServerOrderBandwidth   {
  @JsonProperty("id")
  private String id = null;

  @JsonProperty("price")
  private Integer price = null;

  @JsonProperty("img")
  private String img = null;

  @JsonProperty("short_desc")
  private String shortDesc = null;

  @JsonProperty("long_desc")
  private String longDesc = null;

  @JsonProperty("type")
  private String type = null;

  @JsonProperty("qty")
  private String qty = null;

  @JsonProperty("active")
  private String active = null;

  @JsonProperty("monthly_price")
  private Integer monthlyPrice = null;

  @JsonProperty("price_display")
  private String priceDisplay = null;

  @JsonProperty("monthly_price_display")
  private String monthlyPriceDisplay = null;

  public ServerOrderBandwidth id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Bandwidth ID.
   * @return id
  **/
  @Schema(example = "15", description = "Bandwidth ID.")
  @NotNull

  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderBandwidth price(Integer price) {
    this.price = price;
    return this;
  }

  /**
   * Bandwidth price.
   * @return price
  **/
  @Schema(example = "0", description = "Bandwidth price.")
  @NotNull

  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public ServerOrderBandwidth img(String img) {
    this.img = img;
    return this;
  }

  /**
   * Bandwidth image.
   * @return img
  **/
  @Schema(example = "bandwidth.jpg", description = "Bandwidth image.")
  @NotNull

  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderBandwidth shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  /**
   * Short description of the bandwidth.
   * @return shortDesc
  **/
  @Schema(example = "150TB (10Gb Port)", description = "Short description of the bandwidth.")
  @NotNull

  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderBandwidth longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  /**
   * Long description of the bandwidth.
   * @return longDesc
  **/
  @Schema(example = " - 2000GB Bandwidth...", description = "Long description of the bandwidth.")
  @NotNull

  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderBandwidth type(String type) {
    this.type = type;
    return this;
  }

  /**
   * Bandwidth type.
   * @return type
  **/
  @Schema(example = "Standard", description = "Bandwidth type.")
  @NotNull

  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public ServerOrderBandwidth qty(String qty) {
    this.qty = qty;
    return this;
  }

  /**
   * Quantity of bandwidth.
   * @return qty
  **/
  @Schema(example = "4000", description = "Quantity of bandwidth.")
  @NotNull

  public String getQty() {
    return qty;
  }

  public void setQty(String qty) {
    this.qty = qty;
  }

  public ServerOrderBandwidth active(String active) {
    this.active = active;
    return this;
  }

  /**
   * Active status.
   * @return active
  **/
  @Schema(example = "1", description = "Active status.")
  @NotNull

  public String getActive() {
    return active;
  }

  public void setActive(String active) {
    this.active = active;
  }

  public ServerOrderBandwidth monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  /**
   * Monthly price.
   * @return monthlyPrice
  **/
  @Schema(example = "15", description = "Monthly price.")
  @NotNull

  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public ServerOrderBandwidth priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

  /**
   * Display of bandwidth price.
   * @return priceDisplay
  **/
  @Schema(example = "$0.00", description = "Display of bandwidth price.")
  @NotNull

  public String getPriceDisplay() {
    return priceDisplay;
  }

  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  public ServerOrderBandwidth monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  /**
   * Display of monthly bandwidth price.
   * @return monthlyPriceDisplay
  **/
  @Schema(example = "$15.00", description = "Display of monthly bandwidth price.")
  @NotNull

  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderBandwidth serverOrderBandwidth = (ServerOrderBandwidth) o;
    return Objects.equals(this.id, serverOrderBandwidth.id) &&
        Objects.equals(this.price, serverOrderBandwidth.price) &&
        Objects.equals(this.img, serverOrderBandwidth.img) &&
        Objects.equals(this.shortDesc, serverOrderBandwidth.shortDesc) &&
        Objects.equals(this.longDesc, serverOrderBandwidth.longDesc) &&
        Objects.equals(this.type, serverOrderBandwidth.type) &&
        Objects.equals(this.qty, serverOrderBandwidth.qty) &&
        Objects.equals(this.active, serverOrderBandwidth.active) &&
        Objects.equals(this.monthlyPrice, serverOrderBandwidth.monthlyPrice) &&
        Objects.equals(this.priceDisplay, serverOrderBandwidth.priceDisplay) &&
        Objects.equals(this.monthlyPriceDisplay, serverOrderBandwidth.monthlyPriceDisplay);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
