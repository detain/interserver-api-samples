(ns inter-server-management-api.specs.home-services-vps-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-services-vps-links-data
  {
   (ds/opt :465503) string?
   (ds/opt :2500081) string?
   (ds/opt :2578866) string?
   })

(def home-services-vps-links-spec
  (ds/spec
    {:name ::home-services-vps-links
     :spec home-services-vps-links-data}))
