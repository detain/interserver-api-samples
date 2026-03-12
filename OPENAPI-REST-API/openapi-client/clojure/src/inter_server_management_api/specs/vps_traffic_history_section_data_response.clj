(ns inter-server-management-api.specs.vps-traffic-history-section-data-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-traffic-history-section-data-response-data
  {
   })

(def vps-traffic-history-section-data-response-spec
  (ds/spec
    {:name ::vps-traffic-history-section-data-response
     :spec vps-traffic-history-section-data-response-data}))
