(ns inter-server-management-api.specs.home-services-servers-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-services-servers-links-data
  {
   (ds/opt :16058) string?
   })

(def home-services-servers-links-spec
  (ds/spec
    {:name ::home-services-servers-links
     :spec home-services-servers-links-data}))
