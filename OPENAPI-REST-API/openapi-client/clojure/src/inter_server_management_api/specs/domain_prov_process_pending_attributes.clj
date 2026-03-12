(ns inter-server-management-api.specs.domain-prov-process-pending-attributes
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-prov-process-pending-attributes-data
  {
   (ds/opt :id) string?
   (ds/opt :order_id) string?
   (ds/opt :registrationexpirationdate) string?
   (ds/opt :f_auto_renew) string?
   })

(def domain-prov-process-pending-attributes-spec
  (ds/spec
    {:name ::domain-prov-process-pending-attributes
     :spec domain-prov-process-pending-attributes-data}))
