(ns inter-server-management-api.specs.vps-traffic-data-data-section-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-traffic-data-data-section-response-data
  {
   })

(def vps-traffic-data-data-section-response-spec
  (ds/spec
    {:name ::vps-traffic-data-data-section-response
     :spec vps-traffic-data-data-section-response-data}))
