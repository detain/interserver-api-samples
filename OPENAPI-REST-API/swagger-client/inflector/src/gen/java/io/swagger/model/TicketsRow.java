package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Information about a single ticket.
 **/
@Schema(description = "Information about a single ticket.")


public class TicketsRow   {
  @JsonProperty("title")
  private String title = null;
  @JsonProperty("ticketmaskid")
  private String ticketmaskid = null;
  @JsonProperty("lastreplier")
  private String lastreplier = null;
  @JsonProperty("status")
  private String status = null;
  @JsonProperty("priority")
  private String priority = null;
  @JsonProperty("total_replies")
  private Integer totalReplies = null;
  @JsonProperty("lastactivity")
  private String lastactivity = null;
  @JsonProperty("departmenttitle")
  private String departmenttitle = null;
  @JsonProperty("ticketid")
  private Integer ticketid = null;
  @JsonProperty("can_close")
  private String canClose = null;
  @JsonProperty("attachments")
  private Object attachments = null;
  @JsonProperty("status_text")
  private String statusText = null;
  @JsonProperty("checked")
  private Boolean checked = null;
  /**
   **/
  public TicketsRow title(String title) {
    this.title = title;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  public TicketsRow ticketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("ticketmaskid")
  public String getTicketmaskid() {
    return ticketmaskid;
  }
  public void setTicketmaskid(String ticketmaskid) {
    this.ticketmaskid = ticketmaskid;
  }

  /**
   **/
  public TicketsRow lastreplier(String lastreplier) {
    this.lastreplier = lastreplier;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("lastreplier")
  public String getLastreplier() {
    return lastreplier;
  }
  public void setLastreplier(String lastreplier) {
    this.lastreplier = lastreplier;
  }

  /**
   **/
  public TicketsRow status(String status) {
    this.status = status;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("status")
  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   **/
  public TicketsRow priority(String priority) {
    this.priority = priority;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("priority")
  public String getPriority() {
    return priority;
  }
  public void setPriority(String priority) {
    this.priority = priority;
  }

  /**
   **/
  public TicketsRow totalReplies(Integer totalReplies) {
    this.totalReplies = totalReplies;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("total_replies")
  public Integer getTotalReplies() {
    return totalReplies;
  }
  public void setTotalReplies(Integer totalReplies) {
    this.totalReplies = totalReplies;
  }

  /**
   **/
  public TicketsRow lastactivity(String lastactivity) {
    this.lastactivity = lastactivity;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("lastactivity")
  public String getLastactivity() {
    return lastactivity;
  }
  public void setLastactivity(String lastactivity) {
    this.lastactivity = lastactivity;
  }

  /**
   **/
  public TicketsRow departmenttitle(String departmenttitle) {
    this.departmenttitle = departmenttitle;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("departmenttitle")
  public String getDepartmenttitle() {
    return departmenttitle;
  }
  public void setDepartmenttitle(String departmenttitle) {
    this.departmenttitle = departmenttitle;
  }

  /**
   **/
  public TicketsRow ticketid(Integer ticketid) {
    this.ticketid = ticketid;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("ticketid")
  public Integer getTicketid() {
    return ticketid;
  }
  public void setTicketid(Integer ticketid) {
    this.ticketid = ticketid;
  }

  /**
   **/
  public TicketsRow canClose(String canClose) {
    this.canClose = canClose;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("can_close")
  public String getCanClose() {
    return canClose;
  }
  public void setCanClose(String canClose) {
    this.canClose = canClose;
  }

  /**
   **/
  public TicketsRow attachments(Object attachments) {
    this.attachments = attachments;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("attachments")
  public Object getAttachments() {
    return attachments;
  }
  public void setAttachments(Object attachments) {
    this.attachments = attachments;
  }

  /**
   **/
  public TicketsRow statusText(String statusText) {
    this.statusText = statusText;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("status_text")
  public String getStatusText() {
    return statusText;
  }
  public void setStatusText(String statusText) {
    this.statusText = statusText;
  }

  /**
   **/
  public TicketsRow checked(Boolean checked) {
    this.checked = checked;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("checked")
  public Boolean isChecked() {
    return checked;
  }
  public void setChecked(Boolean checked) {
    this.checked = checked;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TicketsRow ticketsRow = (TicketsRow) o;
    return Objects.equals(title, ticketsRow.title) &&
        Objects.equals(ticketmaskid, ticketsRow.ticketmaskid) &&
        Objects.equals(lastreplier, ticketsRow.lastreplier) &&
        Objects.equals(status, ticketsRow.status) &&
        Objects.equals(priority, ticketsRow.priority) &&
        Objects.equals(totalReplies, ticketsRow.totalReplies) &&
        Objects.equals(lastactivity, ticketsRow.lastactivity) &&
        Objects.equals(departmenttitle, ticketsRow.departmenttitle) &&
        Objects.equals(ticketid, ticketsRow.ticketid) &&
        Objects.equals(canClose, ticketsRow.canClose) &&
        Objects.equals(attachments, ticketsRow.attachments) &&
        Objects.equals(statusText, ticketsRow.statusText) &&
        Objects.equals(checked, ticketsRow.checked);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, ticketmaskid, lastreplier, status, priority, totalReplies, lastactivity, departmenttitle, ticketid, canClose, attachments, statusText, checked);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TicketsRow {\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    ticketmaskid: ").append(toIndentedString(ticketmaskid)).append("\n");
    sb.append("    lastreplier: ").append(toIndentedString(lastreplier)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    priority: ").append(toIndentedString(priority)).append("\n");
    sb.append("    totalReplies: ").append(toIndentedString(totalReplies)).append("\n");
    sb.append("    lastactivity: ").append(toIndentedString(lastactivity)).append("\n");
    sb.append("    departmenttitle: ").append(toIndentedString(departmenttitle)).append("\n");
    sb.append("    ticketid: ").append(toIndentedString(ticketid)).append("\n");
    sb.append("    canClose: ").append(toIndentedString(canClose)).append("\n");
    sb.append("    attachments: ").append(toIndentedString(attachments)).append("\n");
    sb.append("    statusText: ").append(toIndentedString(statusText)).append("\n");
    sb.append("    checked: ").append(toIndentedString(checked)).append("\n");
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
