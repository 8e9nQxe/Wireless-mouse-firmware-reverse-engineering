# Wireless Mouse Firmware Reverse Engineering

**English:** A documentation-first reverse-engineering archive for wireless gaming mouse firmware, centered on motion pipelines, sensor tuning, performance modes, and the firmware decisions that shape real-world mouse feel.

**繁體中文：** 一個以文件化為核心的無線遊戲滑鼠韌體逆向工程資料庫，聚焦於移動資料鏈路、感測器調校、性能模式，以及真正影響實際手感的韌體設計細節。

> **翻譯說明 / 翻译说明**  
> 由於本專案所涉及的滑鼠產品多來自中文語言市場，為了便於閱讀與參考，本文加入了由 ChatGPT 輔助生成的中文譯文。然而，原始報告並非由中文母語者撰寫，因此中文表述在個別段落中可能存在用詞不夠準確或語義不夠嚴謹的情況；如不同語言版本之間出現理解差異，應以英文內容為準。  

- [English](#english)
- [繁体中文](#traditional-chinese)
- [简体中文](#simplified-chinese)

<a id="english"></a>

## English

### Project Introduction

This repository collects reverse-engineering materials for four wireless mouse firmware families. Its purpose is to document firmware architecture, runtime behavior, configuration protocols, sensor data paths, and device-side feature logic for lawful interoperability research, defensive security analysis, education, archival study, and owner-authorized repair or maintenance.

The project currently includes original firmware images, decompiled or structured C-like outputs, and architecture/behavior analysis reports produced during the reverse-engineering process.

### Included Firmware Families

| Folder | Firmware Set | Brief Description | Update Notes |
| --- | --- | --- | --- |
| `VAXEE` | `NP-01S_v2_Driver.c` | Reverse-engineering materials for the VAXEE NP-01S v2 firmware set and its high-speed USB dongle image, focused on the end-to-end motion data path, firmware-layer mechanisms that shape perceived mouse feel, and the implementation details of competition mode and trajectory mode. | `-` |
| `CRDRAKO` | `54H_mouse_Cpurad_App_v01.07.01.14.bin`, `54H_dongle_Cpuapp_App_v01.07.01.14.bin`, `54H_dongle_Cpurad_App_v01.07.01.14.bin`, `54H_mouse_Cpurad_App_v01.06.01.12.c` | Reverse-engineering materials for the 54H mouse and dongle firmware family, focused on the end-to-end motion data path, firmware-layer mechanisms that influence perceived mouse feel, and the implementation details of competition mode. | `2026-04-30`: added update analysis for `54H_mouse_Cpurad_App_v01.07.01.14.bin`. Relative to `v01.06.01.12`, the new build still sits on the same `Zephyr + PAW3950 + profile/macro/protocol` base, but makes the platform version explicit and further decomposes runtime responsibilities into clearer USB, RF receive, battery, power-management, sensor-backend, and protocol-processing services. The configuration hot path also shifts from direct profile-offset application toward an active-cache, internal-command, and backend-script replay model, which makes this update better understood as a productization-oriented incremental expansion rather than a base-level rewrite. |
| `NINJUTSO` | `sora-v3_mouse_pid57360_ver_ae1606.bin`, `sora-v3_mouse_pid57360_ver_ae1607.bin`, `sora-v3_mouse_pid57360_ver_ae1609.bin`, `sora-v3_mouse_pid57360_ver_ae1609.bin.c` | Reverse-engineering materials for the Ninjutso Sora V3 firmware set, built on a PixArt-custom main controller and sensor, focused on the `ver_ae1609` sample's `ROM`-driven dual-layer runtime architecture, profile materialization, route-aware wireless `transport` organization, and the firmware-side behavior behind `System Mode`, `LOD`, optical settings, `report-rate` handling, and the marketed `Frame Sync` claim. | `-` |
| `CHAOS` | `CHAOS_8K_J__20260430.hex`, `deverV0.1.4_20260430.bin`, `zephyr.signed_20260430.bin` | Reverse-engineering materials for the CHAOS 8K firmware set, focused on the implementation details of its 25,000 FPS overclocked competition mode, together with firmware-side tuning logic associated with the vendor-specific "feel value" and "Fei Lei Shen" features, within an overall codebase that appears relatively immature and unstable by current market standards. | `2026-04-30`: added update analysis for `deverV0.1.4_20260430.bin`; the new build broadens protocol coverage and adds mixed-link, pairing, charging, DFU, and link-recovery paths, but the implementation still shows patch-accumulated control flow, heavy global-state coupling, weak semantic discipline, and poor boundary control. Its firmware implementation level remains low, and the gap from mainstream mouse firmware engineering practice remains large. |

### Family Selection Rationale

These four firmware families were selected because they form a useful comparison set across different product tiers, integration styles, and engineering models in the wireless gaming mouse market:

- `VAXEE` is treated here as a representative example of self-developed firmware for a high-end wireless gaming mouse. It is especially valuable for studying vendors that appear to have a stronger in-house understanding of sensor tuning, motion-path handling, and feel-oriented firmware behavior.
- `CRDRAKO` is treated here as a representative example of a high-end wireless gaming mouse firmware stack delivered by a specialized embedded solution provider. It is useful as a reference point for the firmware architecture, implementation patterns, and engineering level seen across a large share of commercially available gaming mice.
- `NINJUTSO` is treated here as a representative high-end wireless gaming mouse firmware sample built on a PixArt-custom main controller and sensor. It is especially useful for studying firmware layering, sensor script application, runtime frame construction, and wireless `transport` organization under a PixArt-custom solution.
- `CHAOS` is treated here as a representative example of self-developed firmware for an entry-level wireless mouse. In this project's assessment, it appears materially weaker than the other three families in feature completeness, code quality, architectural discipline, and performance stability, and in several areas falls below what would generally be considered an average market baseline. Even so, it remains useful for studying how lower-cost products approach tuning logic, performance tradeoffs, and firmware organization.

### Repository Contents

- `VAXEE`: [English](./VAXEE/VAXEE_NP-01S_v2_firmware_analysis_report.en.md) | [Traditional Chinese](./VAXEE/VAXEE_NP-01S_v2_firmware_analysis_report.zh-TW.md) | [Simplified Chinese](./VAXEE/VAXEE_NP-01S_v2_firmware_analysis_report.zh-CN.md)
- `CRDRAKO`: [English](./CRDRAKO/CRDRAKO_54H_mouse_firmware_arch_analysis_en.md) | [Traditional Chinese](./CRDRAKO/CRDRAKO_54H_mouse_firmware_arch_analysis_zh-TW.md) | [Simplified Chinese](./CRDRAKO/CRDRAKO_54H_mouse_firmware_arch_analysis_zh-CN.md)
- `NINJUTSO`: [English](./NINJUTSO/Ninjutso_mouse_firmware_arch_analysis_en.md) | [Traditional Chinese](./NINJUTSO/Ninjutso_mouse_firmware_arch_analysis_zh-TW.md) | [Simplified Chinese](./NINJUTSO/Ninjutso_mouse_firmware_arch_analysis_zh-CN.md)
- `CHAOS`: [English](./CHAOS/CHAOS_FIRMWARE_ARCH_ANALYSIS.en.md) | [Traditional Chinese](./CHAOS/CHAOS_FIRMWARE_ARCH_ANALYSIS.zh-TW.md) | [Simplified Chinese](./CHAOS/CHAOS_FIRMWARE_ARCH_ANALYSIS.zh-CN.md)

### Formal Legal Notice and Reverse-Engineering Disclaimer

This repository is published subject to the following notice, limitations, and conditions:

1. **Lawful Purpose Only.** This repository is made available solely for lawful interoperability research, good-faith defensive security research, education, archival documentation, verification, and repair or maintenance involving devices or firmware that the user lawfully owns, lawfully controls, or is expressly authorized to analyze.
2. **No Authorization for Illegal or Unauthorized Conduct.** Nothing in this repository grants permission, encouragement, or instruction to infringe copyright, violate contract terms, exceed authorized access, bypass access controls beyond what applicable law permits, defeat DRM or technical protection measures, evade anti-cheat or anti-tamper systems, clone commercial products, distribute counterfeit firmware, or flash firmware onto devices, dongles, receivers, services, or systems without authorization.
3. **Rights Reserved by Original Owners.** All third-party firmware binaries, trademarks, product names, logos, protocol identifiers, and other proprietary materials referenced in this repository remain the property of their respective owners. Their presence here is for identification, commentary, comparison, compatibility study, verification, preservation, and other potentially lawful research purposes only. No transfer of title, license, waiver, or endorsement is created by publication of this repository, except to the limited extent that a non-waivable right applies under governing law.
4. **No Open-Source Grant by Implication.** Unless a separate `LICENSE` file or express written grant states otherwise, this repository does not, by README alone, grant any open-source license, redistribution right, trademark license, patent license, or commercial-use permission for project-authored materials, and it grants no license whatsoever for third-party firmware or other third-party proprietary content.
5. **User Responsibility and Representation.** Any person who accesses, clones, downloads, builds, reads, studies, modifies, redistributes, or otherwise uses this repository does so at their own risk and is solely responsible for complying with all applicable laws, regulations, court orders, export controls, platform rules, contractual restrictions, workplace policies, and third-party rights in the relevant jurisdiction. If additional consent, ownership, or authorization is legally required, the user must obtain it before acting.
6. **Jurisdiction-Specific Limits Apply.** Reverse engineering, decompilation, circumvention, redistribution, and firmware flashing are regulated differently across jurisdictions. Some jurisdictions recognize narrow exceptions for matters such as interoperability or good-faith security research, while others impose additional restrictions. Users must evaluate legality under the specific facts and law that apply to them before using any material in this repository.
7. **No Warranty; No Safety Guarantee.** All materials are provided on an "as is" and "as available" basis, without any warranty of legality, accuracy, completeness, safety, merchantability, fitness for a particular purpose, non-infringement, or technical correctness. Firmware analysis can be incomplete or mistaken. Building, flashing, replaying, or adapting firmware may damage hardware, void warranties, corrupt storage, degrade wireless performance, or create regulatory or legal exposure.
8. **No Operational Deployment Guidance.** This repository is intended for research and documentation. It is not a production flashing guide, a bypass toolkit, a field-support package, or a deployment manual. Any operational use is outside the intended scope of publication.
9. **Cooperation With Legitimate Rights Concerns.** If a rightsholder or authorized representative believes that specific content in this repository is unlawful or improperly included, they may request review or removal through the platform's established reporting channels. Repository maintainers may review, restrict, redact, or remove content at their discretion.
10. **Severability and Mandatory Law.** If any part of this notice is held unenforceable under a particular jurisdiction's mandatory law, that part shall be interpreted to the minimum extent necessary, and the remaining provisions shall remain in effect to the fullest extent permitted by law.
11. **Not Legal Advice.** This repository and this notice do not constitute legal advice. If legality matters for publication, redistribution, reverse engineering, circumvention, disclosure, export, repair, or commercial activity, consult qualified counsel in the relevant jurisdiction before proceeding.

### Acknowledgements

Special thanks to the Chinese peripheral enthusiast **"小白菜"** for supporting this project.


---

<a id="traditional-chinese"></a>

## 繁體中文

### 專案簡介

本儲存庫彙整了四組無線滑鼠韌體的逆向工程材料，目的在於記錄韌體架構、執行流程、設定協議、感測器資料路徑，以及裝置端功能邏輯，供合法的互通性研究、防禦性安全研究、教學、檔案保存，以及裝置所有人或經授權者進行維修與維護時參考。

目前內容包含原始韌體映像、反編譯或結構化 C 類輸出，以及逆向分析過程中整理出的架構與行為分析報告。

### 收錄的韌體家族

| 資料夾 | 韌體集合 | 簡要說明 | 更新記錄 |
| --- | --- | --- | --- |
| `VAXEE` | `NP-01S_v2_Driver.c` | VAXEE NP-01S v2 滑鼠韌體與高速 USB 接收器映像的逆向材料，重點分析移動資料的端到端流轉路徑、影響滑鼠手感的韌體層機制，以及競技模式與軌跡模式的實作細節。 | `-` |
| `CRDRAKO` | `54H_mouse_Cpurad_App_v01.07.01.14.bin`、`54H_dongle_Cpuapp_App_v01.07.01.14.bin`、`54H_dongle_Cpurad_App_v01.07.01.14.bin`、`54H_mouse_Cpurad_App_v01.06.01.12.c` | 54H 滑鼠與接收器韌體家族的逆向材料，重點分析移動資料的端到端流轉路徑、影響滑鼠手感的韌體層機制，以及競技模式的實作細節。 | `2026-04-30`：新增 `54H_mouse_Cpurad_App_v01.07.01.14.bin` 更新分析。相對 `v01.06.01.12`，新版仍然建立在同一條 `Zephyr + PAW3950 + profile/macro/protocol` 底座上，但已將平台版本明確化，並把執行時職責進一步拆成較清楚的 USB、RF 接收、電池、電源管理、感測器後端與協議處理服務。配置熱路徑也從舊版直接以 profile 固定偏移驅動行為，演進為活動快取、內部命令與後端指令碼回放相結合的模型，因此更適合被理解為一次面向產品化的增量擴寫，而不是底座重構。 |
| `NINJUTSO` | `sora-v3_mouse_pid57360_ver_ae1606.bin`、`sora-v3_mouse_pid57360_ver_ae1607.bin`、`sora-v3_mouse_pid57360_ver_ae1609.bin`、`sora-v3_mouse_pid57360_ver_ae1609.bin.c` | Ninjutso Sora V3 滑鼠韌體逆向材料，採用原相客製主控與原相客製感測器，重點分析 `ver_ae1609` 樣本中由 `ROM` 主導的雙層執行架構、`profile` 到執行期映像的物化流程、具 route-aware 特性的無線 `transport` 組織方式，以及 `System Mode`、`LOD`、optical 設定、`report-rate` 與「Frame Sync」宣稱在韌體中的實際行為。 | `-` |
| `CHAOS` | `CHAOS_8K_J__20260430.hex`、`deverV0.1.4_20260430.bin`、`zephyr.signed_20260430.bin` | CHAOS 8K 滑鼠韌體相關逆向材料，重點分析 25,000 FPS 超頻競技模式的實作細節，以及與「手感值」與「飛雷神」功能相關的韌體級調校邏輯；整體程式碼與系統設計則呈現出相對不成熟且穩定性偏弱的特徵。 | `2026-04-30`：新增 `deverV0.1.4_20260430.bin` 更新分析；新版雖然補入了混合鏈路、配對、充電、DFU 與鏈路恢復等路徑，協議面也更寬，但實作層仍然呈現明顯的補丁式控制流堆疊、沉重的全域狀態耦合、薄弱的語義紀律與失衡的模組邊界控制，韌體實作水準很低，與主流滑鼠韌體的工程實踐水準仍有顯著差距。 |

### 家族選用說明

之所以選擇這四組韌體作為對照樣本，是因為它們能夠分別代表無線遊戲滑鼠市場中，不同產品定位、整合方案與工程模式下的典型實作方向：

- `VAXEE` 在本專案中被視為高階自研無線遊戲滑鼠韌體的代表樣本，特別適合作為研究感測器調校能力、移動資料處理路徑，以及以手感為導向之韌體設計思路的參考對象。
- `CRDRAKO` 在本專案中被視為由專門嵌入式方案供應商提供之高階無線遊戲滑鼠韌體代表樣本，可作為觀察市場上大多數商用滑鼠在韌體架構、實作模式與整體工程成熟度上的重要參考基準。
- `NINJUTSO` 在本專案中被視為採用原相客製主控與原相客製感測器的高階無線電競滑鼠韌體代表樣本，特別適合作為觀察原相客製方案在韌體分層、感測器腳本套用、執行期組幀與無線 `transport` 組織方式上的參考對象。
- `CHAOS` 在本專案中被視為低階自研無線滑鼠韌體的代表樣本。依本專案的分析判斷，其在功能完整度、程式碼品質、架構紀律與性能穩定性上，均明顯弱於其餘三者，且若以現行市場的一般水準衡量，部分面向甚至低於常見平均線。不過，它仍然具有研究價值，特別適合用來觀察低成本產品在調校邏輯、性能取捨與韌體組織方式上的典型問題。

### 儲存庫內容

- `VAXEE`: [English](./VAXEE/VAXEE_NP-01S_v2_firmware_analysis_report.en.md) | [繁體中文](./VAXEE/VAXEE_NP-01S_v2_firmware_analysis_report.zh-TW.md) | [简体中文](./VAXEE/VAXEE_NP-01S_v2_firmware_analysis_report.zh-CN.md)
- `CRDRAKO`: [English](./CRDRAKO/CRDRAKO_54H_mouse_firmware_arch_analysis_en.md) | [繁體中文](./CRDRAKO/CRDRAKO_54H_mouse_firmware_arch_analysis_zh-TW.md) | [简体中文](./CRDRAKO/CRDRAKO_54H_mouse_firmware_arch_analysis_zh-CN.md)
- `NINJUTSO`: [English](./NINJUTSO/Ninjutso_mouse_firmware_arch_analysis_en.md) | [繁體中文](./NINJUTSO/Ninjutso_mouse_firmware_arch_analysis_zh-TW.md) | [简体中文](./NINJUTSO/Ninjutso_mouse_firmware_arch_analysis_zh-CN.md)
- `CHAOS`: [English](./CHAOS/CHAOS_FIRMWARE_ARCH_ANALYSIS.en.md) | [繁體中文](./CHAOS/CHAOS_FIRMWARE_ARCH_ANALYSIS.zh-TW.md) | [简体中文](./CHAOS/CHAOS_FIRMWARE_ARCH_ANALYSIS.zh-CN.md)

### 正式法律通知與逆向聲明

本儲存庫之發布，受下列通知、限制與條件拘束：

1. **僅限合法用途。** 本儲存庫僅為合法的互通性研究、善意且防禦性的安全研究、教學、檔案保存、驗證，以及使用者對其合法持有、合法控制或已明確取得授權之裝置或韌體所進行的維修與維護而提供。
2. **不授權任何非法或未經授權行為。** 本儲存庫中的任何內容，均不構成對著作權侵害、違反契約條款、逾越授權存取、在法律未允許範圍外規避存取控制、繞過 DRM 或技術保護措施、規避反作弊或防篡改機制、複製商業產品、散布仿冒韌體，或未經授權將韌體燒錄至裝置、接收器、服務或系統的許可、鼓勵或操作指引。
3. **原權利人保留一切權利。** 本儲存庫所涉及的所有第三方韌體二進位、商標、產品名稱、標誌、協議識別資訊及其他專有材料，均仍屬其各自權利人所有。其於本儲存庫中的出現，僅用於識別、評論、比較、相容性研究、驗證、保存及其他可能合法的研究目的。除非適用法律明文賦予且不得排除之權利另有要求，本儲存庫之發布不構成任何所有權移轉、授權、權利拋棄或背書。
4. **不因 README 而默示授予開源權利。** 除非另有獨立的 `LICENSE` 檔案或明確書面授權，否則本儲存庫不會僅因本 README 而授予任何開源授權、再散布權、商標授權、專利授權或商業使用許可；對於第三方韌體或其他第三方專有內容，亦不授予任何形式之授權。
5. **使用者責任與聲明。** 任何存取、複製、下載、建置、閱讀、研究、修改、再散布或以其他方式使用本儲存庫之人，均應自行承擔風險，並對遵守其所在地適用之法律、法規、法院命令、出口管制、平台規則、契約限制、工作場所政策及第三方權利負完全責任。如法律要求另行取得同意、所有權基礎或其他授權，使用者應於行動前自行取得。
6. **不同法域有不同限制。** 逆向工程、反編譯、技術規避、再散布及韌體燒錄，在不同法域受到不同規範。部分法域對互通性或善意安全研究承認有限例外，亦有部分法域施加更嚴格限制。使用者在使用本儲存庫任何材料前，應先依其具體事實與適用法律自行判斷是否合法。
7. **不提供任何保證。** 所有材料均依「現狀」與「可得性」提供，不就合法性、正確性、完整性、安全性、適售性、特定目的適用性、不侵權或技術正確性提供任何明示或默示保證。韌體分析可能不完整或存在錯誤；建置、燒錄、重播或改寫韌體，可能造成硬體損壞、保固失效、儲存毀損、無線效能下降，或產生監管與法律風險。
8. **不提供實務部署指引。** 本儲存庫之定位為研究與文件保存，不是量產燒錄指南、規避工具包、現場支援套件或部署手冊。任何實際部署或操作用途，均不在本儲存庫的發布目的之內。
9. **配合正當權利主張。** 如權利人或其授權代表認為本儲存庫中特定內容違法或不當收錄，可透過平台既有申訴或通報管道要求審查或移除。儲存庫維護者得自行決定是否審查、限制、編修或移除相關內容。
10. **可分割性與強制法規。** 若本通知之任何部分在特定法域下被認定為不可執行，該部分應在必要最低範圍內受限縮解釋，其餘條款仍應在法律允許之最大範圍內持續有效。
11. **不構成法律意見。** 本儲存庫及本通知不構成法律意見。若發布、再散布、逆向、規避、揭露、出口、維修或商業活動的合法性對你具有重要影響，請於進一步行動前諮詢相關法域的合格法律專業人士。

### 致謝

特別感謝中國外設愛好者 **「小白菜」** 對本專案的支持。



---

<a id="simplified-chinese"></a>

## 简体中文

### 项目简介

本仓库汇总了四组无线鼠标固件的逆向工程材料，目标是记录固件架构、运行流程、配置协议、传感器数据路径，以及设备端功能逻辑，供合法的互操作性研究、防御性安全研究、教学、资料归档，以及设备所有人或经授权者开展维修与维护时参考。

当前内容包含原始固件镜像、反编译或结构化 C 类输出，以及在逆向分析过程中整理出的架构与行为分析报告。

### 收录的固件家族

| 文件夹 | 固件集合 | 简要说明 | 更新记录 |
| --- | --- | --- | --- |
| `VAXEE` | `NP-01S_v2_Driver.c` | VAXEE NP-01S v2 鼠标固件与高速 USB 接收器镜像的逆向材料，重点分析移动数据的端到端流转路径、影响鼠标手感的固件层机制，以及竞技模式与轨迹模式的实现细节。 | `-` |
| `CRDRAKO` | `54H_mouse_Cpurad_App_v01.07.01.14.bin`、`54H_dongle_Cpuapp_App_v01.07.01.14.bin`、`54H_dongle_Cpurad_App_v01.07.01.14.bin`、`54H_mouse_Cpurad_App_v01.06.01.12.c` | 54H 鼠标与接收器固件家族的逆向材料，重点分析移动数据的端到端流转路径、影响鼠标手感的固件层机制，以及竞技模式的实现细节。 | `2026-04-30`：新增 `54H_mouse_Cpurad_App_v01.07.01.14.bin` 更新分析。相对 `v01.06.01.12`，新版仍然建立在同一条 `Zephyr + PAW3950 + profile/macro/protocol` 底座上，但已经把平台版本明确定出来，并将运行时职责进一步拆成更清晰的 USB、RF 接收、电池、电源管理、传感器后端与协议处理服务。配置热路径也从旧版直接以 profile 固定偏移驱动行为，演进为活动缓存、内部命令与后端脚本回放相结合的模型，因此更适合被理解为一次面向产品化的增量扩写，而不是底座重构。 |
| `NINJUTSO` | `sora-v3_mouse_pid57360_ver_ae1606.bin`、`sora-v3_mouse_pid57360_ver_ae1607.bin`、`sora-v3_mouse_pid57360_ver_ae1609.bin`、`sora-v3_mouse_pid57360_ver_ae1609.bin.c` | Ninjutso Sora V3 鼠标固件逆向材料，采用原相定制主控与原相定制传感器，重点分析 `ver_ae1609` 样本中由 `ROM` 主导的双层运行架构、`profile` 到运行时镜像的物化流程、具 route-aware 特性的无线 `transport` 组织方式，以及 `System Mode`、`LOD`、optical 设置、`report-rate` 与“Frame Sync”宣传在固件中的实际行为。 | `-` |
| `CHAOS` | `CHAOS_8K_J__20260430.hex`、`deverV0.1.4_20260430.bin`、`zephyr.signed_20260430.bin` | CHAOS 8K 鼠标固件相关逆向材料，重点分析 25,000 FPS 超频竞技模式的实现细节，以及与“手感值”和“飞雷神”功能相关的固件级调校逻辑；其整体代码与系统设计则表现出相对不成熟且稳定性偏弱的特征。 | `2026-04-30`：新增 `deverV0.1.4_20260430.bin` 更新分析；新版虽然补入了混合链路、配对、充电、DFU 与链路恢复等路径，协议面也更宽，但实现层仍然表现出明显的补丁式控制流堆叠、沉重的全局状态耦合、薄弱的语义纪律与失衡的模块边界控制，固件实现水平很低，与主流鼠标固件的工程实践水平仍有显著差距。 |

### 家族选用说明

之所以选择这四组固件作为对照样本，是因为它们能够分别代表无线游戏鼠标市场中，不同产品定位、整合方案与工程模式下的典型实现方向：

- `VAXEE` 在本项目中被视为高端自研无线游戏鼠标固件的代表样本，特别适合作为研究传感器调校能力、移动数据处理路径，以及以手感为导向的固件设计思路的参考对象。
- `CRDRAKO` 在本项目中被视为由专门嵌入式方案供应商提供的高端无线游戏鼠标固件代表样本，可作为观察市场上大多数商用鼠标在固件架构、实现模式与整体工程成熟度上的重要参考基准。
- `NINJUTSO` 在本项目中被视为采用原相定制主控与原相定制传感器的高端无线游戏鼠标固件代表样本，特别适合作为观察原相定制方案在固件分层、传感器脚本应用、运行时构帧与无线 `transport` 组织方式上的参考对象。
- `CHAOS` 在本项目中被视为低端自研无线鼠标固件的代表样本。依本项目的分析判断，它在功能完整度、代码质量、架构纪律与性能稳定性上都明显弱于其余三者，且若以当前市场的一般水平衡量，部分方面甚至低于常见平均线。不过，它依然具有研究价值，尤其适合作为观察低成本产品在调校逻辑、性能取舍与固件组织方式上典型问题的样本。

### 仓库内容

- `VAXEE`: [English](./VAXEE/VAXEE_NP-01S_v2_firmware_analysis_report.en.md) | [繁體中文](./VAXEE/VAXEE_NP-01S_v2_firmware_analysis_report.zh-TW.md) | [简体中文](./VAXEE/VAXEE_NP-01S_v2_firmware_analysis_report.zh-CN.md)
- `CRDRAKO`: [English](./CRDRAKO/CRDRAKO_54H_mouse_firmware_arch_analysis_en.md) | [繁體中文](./CRDRAKO/CRDRAKO_54H_mouse_firmware_arch_analysis_zh-TW.md) | [简体中文](./CRDRAKO/CRDRAKO_54H_mouse_firmware_arch_analysis_zh-CN.md)
- `NINJUTSO`: [English](./NINJUTSO/Ninjutso_mouse_firmware_arch_analysis_en.md) | [繁體中文](./NINJUTSO/Ninjutso_mouse_firmware_arch_analysis_zh-TW.md) | [简体中文](./NINJUTSO/Ninjutso_mouse_firmware_arch_analysis_zh-CN.md)
- `CHAOS`: [English](./CHAOS/CHAOS_FIRMWARE_ARCH_ANALYSIS.en.md) | [繁體中文](./CHAOS/CHAOS_FIRMWARE_ARCH_ANALYSIS.zh-TW.md) | [简体中文](./CHAOS/CHAOS_FIRMWARE_ARCH_ANALYSIS.zh-CN.md)

### 正式法律通知与逆向免责声明

本仓库的发布，受下列通知、限制与条件约束：

1. **仅限合法用途。** 本仓库仅为合法的互操作性研究、善意且防御性的安全研究、教学、资料归档、验证，以及用户针对其合法拥有、合法控制或已明确获得授权之设备或固件所进行的维修与维护而提供。
2. **不授权任何非法或未授权行为。** 本仓库中的任何内容，均不构成对侵犯著作权、违反合同条款、超越授权访问、在法律未允许范围外规避访问控制、绕过 DRM 或技术保护措施、规避反作弊或防篡改机制、克隆商业产品、传播仿冒固件，或未经授权向设备、接收器、服务或系统刷写固件的许可、鼓励或操作指引。
3. **原权利人保留全部权利。** 本仓库所涉及的所有第三方固件二进制、商标、产品名称、标识、协议标识信息及其他专有材料，均仍归其各自权利人所有。其出现在本仓库中，仅用于识别、评论、比较、兼容性研究、验证、保存及其他可能合法的研究目的。除非适用法律明确赋予且不得排除的权利另有要求，本仓库的发布不构成任何所有权转移、授权、权利放弃或背书。
4. **README 本身不默示授予开源许可。** 除非另有独立的 `LICENSE` 文件或明确书面授权，否则本仓库不会仅因本 README 而授予任何开源许可、再分发权、商标许可、专利许可或商业使用许可；对于第三方固件或其他第三方专有内容，也不授予任何形式的许可。
5. **用户责任与陈述。** 任何访问、克隆、下载、构建、阅读、研究、修改、再分发或以其他方式使用本仓库的人，均应自行承担风险，并对遵守其所在地适用的法律、法规、法院命令、出口管制、平台规则、合同限制、工作场所政策及第三方权利负全部责任。如法律要求另行取得同意、所有权基础或其他授权，用户应在采取行动前自行取得。
6. **不同法域存在不同限制。** 逆向工程、反编译、技术规避、再分发及固件刷写，在不同法域受到不同规制。部分法域对互操作性或善意安全研究承认有限例外，也有部分法域施加更严格限制。用户在使用本仓库任何材料前，应先依据其具体事实与适用法律自行判断是否合法。
7. **不提供任何保证。** 所有材料均按“现状”和“可获得”基础提供，不就合法性、准确性、完整性、安全性、适销性、特定用途适用性、不侵权或技术正确性作出任何明示或默示保证。固件分析可能并不完整，也可能存在错误；构建、刷写、重放或改写固件，可能导致硬件损坏、保修失效、存储损坏、无线性能下降，或带来监管与法律风险。
8. **不提供实务部署指引。** 本仓库定位为研究与文档归档，不是量产刷写指南、规避工具包、现场支持包或部署手册。任何实际部署或操作用途，均不在本仓库的发布目的之内。
9. **配合正当权利主张。** 如权利人或其授权代表认为本仓库中特定内容违法或收录不当，可通过平台既有的申诉或举报渠道请求审查或移除。仓库维护者可自行决定是否审查、限制、编辑或移除相关内容。
10. **可分割性与强制性法律。** 如本通知中的任何部分在特定法域下被认定为不可执行，该部分应在必要最低范围内限缩解释，其余条款仍应在法律允许的最大范围内继续有效。
11. **不构成法律意见。** 本仓库及本通知不构成法律意见。若发布、再分发、逆向、规避、披露、出口、维修或商业活动的合法性对你具有重要影响，请在进一步行动前咨询相关法域的合格法律专业人士。

### 致谢

特别感谢中国外设爱好者 **“小白菜”** 对本项目的支持。
