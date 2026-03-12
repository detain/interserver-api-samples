(ns inter-server-management-api.specs.website-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def website-row-data
  {
   (ds/req :website_id) string?
   (ds/req :website_hostname) string?
   (ds/req :repeat_invoices_cost) string?
   (ds/req :website_status) string?
   (ds/req :services_name) string?
   (ds/req :website_comment) string?
   })

(def website-row-spec
  (ds/spec
    {:name ::website-row
     :spec website-row-data}))
