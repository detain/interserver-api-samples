package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * An IP block option available when ordering a dedicated server.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "An IP block option available when ordering a dedicated server.")

public class ServerOrderIP   {

  private @Valid String id = null;

  private @Valid Integer price = null;

  private @Valid String img = null;

  private @Valid String shortDesc = null;

  private @Valid String longDesc = null;

  private @Valid String qty = null;

  private @Valid Integer monthlyPrice = null;

  private @Valid String priceDisplay = null;

  private @Valid String monthlyPriceDisplay = null;

  /**
   * IP ID.
   **/
  public ServerOrderIP id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "9", value = "IP ID.")
  @JsonProperty("id")
  @NotNull

  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * IP price.
   **/
  public ServerOrderIP price(Integer price) {
    this.price = price;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "IP price.")
  @JsonProperty("price")
  @NotNull

  public Integer getPrice() {
    return price;
  }
  public void setPrice(Integer price) {
    this.price = price;
  }

  /**
   * IP image.
   **/
  public ServerOrderIP img(String img) {
    this.img = img;
    return this;
  }

  
  @ApiModelProperty(example = "ips.jpg", value = "IP image.")
  @JsonProperty("img")
  @NotNull

  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  /**
   * Short description of the IP.
   **/
  public ServerOrderIP shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  @ApiModelProperty(example = "1 Vlan Ip (/30)", value = "Short description of the IP.")
  @JsonProperty("short_desc")
  @NotNull

  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   * Long description of the IP.
   **/
  public ServerOrderIP longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  
  @ApiModelProperty(example = "1 IP In personal Vlan", value = "Long description of the IP.")
  @JsonProperty("long_desc")
  @NotNull

  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   * Quantity of IPs.
   **/
  public ServerOrderIP qty(String qty) {
    this.qty = qty;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "Quantity of IPs.")
  @JsonProperty("qty")
  @NotNull

  public String getQty() {
    return qty;
  }
  public void setQty(String qty) {
    this.qty = qty;
  }

  /**
   * Monthly price.
   **/
  public ServerOrderIP monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Monthly price.")
  @JsonProperty("monthly_price")
  @NotNull

  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   * Display of IP price.
   **/
  public ServerOrderIP priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

  
  @ApiModelProperty(example = "$0.00", value = "Display of IP price.")
  @JsonProperty("price_display")
  @NotNull

  public String getPriceDisplay() {
    return priceDisplay;
  }
  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  /**
   * Display of monthly IP price.
   **/
  public ServerOrderIP monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  
  @ApiModelProperty(example = "$0.00", value = "Display of monthly IP price.")
  @JsonProperty("monthly_price_display")
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
    ServerOrderIP serverOrderIP = (ServerOrderIP) o;
    return Objects.equals(id, serverOrderIP.id) &&
        Objects.equals(price, serverOrderIP.price) &&
        Objects.equals(img, serverOrderIP.img) &&
        Objects.equals(shortDesc, serverOrderIP.shortDesc) &&
        Objects.equals(longDesc, serverOrderIP.longDesc) &&
        Objects.equals(qty, serverOrderIP.qty) &&
        Objects.equals(monthlyPrice, serverOrderIP.monthlyPrice) &&
        Objects.equals(priceDisplay, serverOrderIP.priceDisplay) &&
        Objects.equals(monthlyPriceDisplay, serverOrderIP.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, qty, monthlyPrice, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderIP {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    qty: ").append(toIndentedString(qty)).append("\n");
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
