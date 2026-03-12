(ns inter-server-management-api.specs.mail-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-row-data
  {
   (ds/opt :mail_id) string?
   (ds/opt :repeat_invoices_cost) string?
   (ds/opt :mail_username) string?
   (ds/opt :mail_status) string?
   (ds/opt :services_name) string?
   })

(def mail-row-spec
  (ds/spec
    {:name ::mail-row
     :spec mail-row-data}))
