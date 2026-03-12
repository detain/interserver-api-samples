package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="An IP block option available when ordering a dedicated server.")

public class ServerOrderIP   {
  private String id = null;
  private Integer price = null;
  private String img = null;
  private String shortDesc = null;
  private String longDesc = null;
  private String qty = null;
  private Integer monthlyPrice = null;
  private String priceDisplay = null;
  private String monthlyPriceDisplay = null;

  /**
   * IP ID.
   **/
  
  @Schema(example = "9", description = "IP ID.")
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
  
  @Schema(example = "0", description = "IP price.")
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
  
  @Schema(example = "ips.jpg", description = "IP image.")
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
  
  @Schema(example = "1 Vlan Ip (/30)", description = "Short description of the IP.")
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
  
  @Schema(example = "1 IP In personal Vlan", description = "Long description of the IP.")
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
  
  @Schema(example = "1", description = "Quantity of IPs.")
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
  
  @Schema(example = "0", description = "Monthly price.")
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
  
  @Schema(example = "$0.00", description = "Display of IP price.")
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
  
  @Schema(example = "$0.00", description = "Display of monthly IP price.")
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
