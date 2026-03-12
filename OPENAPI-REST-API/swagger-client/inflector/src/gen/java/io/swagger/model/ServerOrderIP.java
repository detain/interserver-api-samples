package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * An IP block option available when ordering a dedicated server.
 **/
@Schema(description = "An IP block option available when ordering a dedicated server.")


public class ServerOrderIP   {
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
  @JsonProperty("qty")
  private String qty = null;
  @JsonProperty("monthly_price")
  private Integer monthlyPrice = null;
  @JsonProperty("price_display")
  private String priceDisplay = null;
  @JsonProperty("monthly_price_display")
  private String monthlyPriceDisplay = null;
  /**
   * IP ID.
   **/
  public ServerOrderIP id(String id) {
    this.id = id;
    return this;
  }

  
  @Schema(example = "9", description = "IP ID.")
  @JsonProperty("id")
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

  
  @Schema(example = "0", description = "IP price.")
  @JsonProperty("price")
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

  
  @Schema(example = "ips.jpg", description = "IP image.")
  @JsonProperty("img")
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

  
  @Schema(example = "1 Vlan Ip (/30)", description = "Short description of the IP.")
  @JsonProperty("short_desc")
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

  
  @Schema(example = "1 IP In personal Vlan", description = "Long description of the IP.")
  @JsonProperty("long_desc")
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

  
  @Schema(example = "1", description = "Quantity of IPs.")
  @JsonProperty("qty")
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

  
  @Schema(example = "0", description = "Monthly price.")
  @JsonProperty("monthly_price")
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

  
  @Schema(example = "$0.00", description = "Display of IP price.")
  @JsonProperty("price_display")
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

  
  @Schema(example = "$0.00", description = "Display of monthly IP price.")
  @JsonProperty("monthly_price_display")
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
