goog.provide('API.Client.StatusMonthlyBreakdown');

/**
 * Monthly mail delivery status breakdown, showing counts per status category.
 * @record
 */
API.Client.StatusMonthlyBreakdown = function() {}

/**
 * @type {!API.Client.MonthlyCounts}
 * @export
 */
API.Client.StatusMonthlyBreakdown.prototype._default;

/**
 * @type {!API.Client.MonthlyCounts}
 * @export
 */
API.Client.StatusMonthlyBreakdown.prototype.failed;

/**
 * @type {!API.Client.MonthlyCounts}
 * @export
 */
API.Client.StatusMonthlyBreakdown.prototype.rejected;

/**
 * @type {!API.Client.MonthlyCounts}
 * @export
 */
API.Client.StatusMonthlyBreakdown.prototype.pending;

/**
 * @type {!API.Client.MonthlyCounts}
 * @export
 */
API.Client.StatusMonthlyBreakdown.prototype.locked;

/**
 * @type {!API.Client.MonthlyCounts}
 * @export
 */
API.Client.StatusMonthlyBreakdown.prototype.paid;

