(ns inter-server-management-api.specs.home-services-domains-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-services-domains-links-data
  {
   (ds/opt :376114) string?
   (ds/opt :376503) string?
   (ds/opt :592337) string?
   })

(def home-services-domains-links-spec
  (ds/spec
    {:name ::home-services-domains-links
     :spec home-services-domains-links-data}))
